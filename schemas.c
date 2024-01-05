#include "schemas.h"

#include <stdlib.h>
#include <string.h>
char *get_string(cJSON *json, char *name) {
  char *old_string = cJSON_GetObjectItemCaseSensitive(json, name)->valuestring;
  return strcpy(calloc(strlen(old_string) + 1, sizeof(char)), old_string);
}
int get_int(cJSON *json, char *name) {
  return cJSON_GetObjectItemCaseSensitive(json, name)->valueint;
}
st_agent_t parse_agent(cJSON *json) {
  char *id = get_string(json, "accountId");
  char *symbol = get_string(json, "symbol");
  char *headquarters = get_string(json, "headquarters");
  int credits = get_int(json, "credits");
  char *faction = get_string(json, "startingFaction");
  int ships = get_int(json, "shipCount");

  st_agent_t agent;
  agent.account_id = id;
  agent.credits = credits;
  agent.headquarters = headquarters;
  agent.ship_count = ships;
  agent.starting_faction = faction;
  agent.symbol = symbol;

  return agent;
}
char *parse_account_request(char *faction, char *symbol, char *email) {
  cJSON *request = cJSON_CreateObject();
  cJSON_AddStringToObject(request, "faction", faction);
  cJSON_AddStringToObject(request, "symbol", symbol);
  cJSON_AddStringToObject(request, "email", email);
  char *data = cJSON_Print(request);
  cJSON_Delete(request);
  return data;
}
st_status_t parse_status(char *data) {
  cJSON *json = cJSON_Parse(data);

  st_status_t status;
  status.status = get_string(json, "status");
  status.version = get_string(json, "version");
  status.reset_date = get_string(json, "resetDate");
  status.description = get_string(json, "description");
  cJSON *server_resets = cJSON_GetObjectItemCaseSensitive(json, "serverResets");
  status.server_resets.name = get_string(server_resets, "next");
  status.server_resets.value = get_string(server_resets, "frequency");
  cJSON *stats = cJSON_GetObjectItemCaseSensitive(json, "stats");
  status.stats.agents = get_int(stats, "agents");
  status.stats.ships = get_int(stats, "ships");
  status.stats.systems = get_int(stats, "systems");
  status.stats.waypoints = get_int(stats, "waypoints");
  cJSON *leaderboard = cJSON_GetObjectItemCaseSensitive(json, "leaderboards");
  cJSON *most_credits =
	  cJSON_GetObjectItemCaseSensitive(leaderboard, "mostCredits");
  cJSON *most_charts =
	  cJSON_GetObjectItemCaseSensitive(leaderboard, "mostSubmittedCharts");
  status.leaderboard.most_credits_len = cJSON_GetArraySize(most_credits);
  status.leaderboard.most_charts_len = cJSON_GetArraySize(most_charts);
  st_leaderboard_count *credits_list = malloc(
	  status.leaderboard.most_credits_len * sizeof(st_leaderboard_count));
  st_leaderboard_count *charts_list =
	  malloc(status.leaderboard.most_charts_len * sizeof(st_leaderboard_count));
  int i = 0;
  cJSON *entry = NULL;
  cJSON_ArrayForEach(entry, most_credits) {
	st_leaderboard_count count;
	count.agent = get_string(entry, "agentSymbol");
	count.count = get_int(entry, "credits");
	credits_list[i++] = count;
  }
  status.leaderboard.most_credits = credits_list;
  i = 0;
  entry = NULL;
  cJSON_ArrayForEach(entry, most_charts) {
	st_leaderboard_count count;
	count.agent = get_string(entry, "agentSymbol");
	count.count = get_int(entry, "chartCount");
	charts_list[i++] = count;
  }
  status.leaderboard.most_charts = charts_list;
  cJSON *announcements =
	  cJSON_GetObjectItemCaseSensitive(json, "announcements");
  status.announcements_len = cJSON_GetArraySize(announcements);
  st_status_entry *announcements_list =
	  malloc(status.announcements_len * sizeof(st_status_entry));
  i = 0;
  entry = NULL;
  cJSON_ArrayForEach(entry, announcements) {
	st_status_entry st_entry;
	st_entry.name = get_string(entry, "title");
	st_entry.value = get_string(entry, "body");
	announcements_list[i++] = st_entry;
  }
  status.announcements = announcements_list;
  cJSON *links = cJSON_GetObjectItemCaseSensitive(json, "links");
  status.links_len = cJSON_GetArraySize(links);
  st_status_entry *links_list = malloc(status.links_len * sizeof(st_status_entry));
  i = 0;
  entry = NULL;
  cJSON_ArrayForEach(entry, links) {
	st_status_entry st_entry;
	st_entry.name = get_string(entry, "name");
	st_entry.value = get_string(entry, "url");
	links_list[i++] = st_entry;
  }
  status.links = links_list;
  cJSON_Delete(json);
  return status;
}