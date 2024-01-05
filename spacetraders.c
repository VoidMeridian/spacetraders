#include "spacetraders.h"

#include <cjson/cJSON.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "schemas.h"
#include "spacetraders-functions.h"

void create_account(st_client_t *client, char *faction, char *symbol,
					char *email) {
  char *data = parse_account_request(faction, symbol, email);
#ifdef DEBUG
  printf("%s\n", data);
#endif
  char *response = api_post(client, "/register", data);

  //     cJSON *json = cJSON_Parse(response);
  //     cJSON *agent_data = cJSON_GetObjectItemCaseSensitive(json, "data");
  //     st_agent_t agent = parse_agent(cJSON_GetObjectItemCaseSensitive(json,
  //     "agent"));

  //     cJSON_Delete(json);
  //     free(data);
  //     free(response);
}

void status(st_client_t *client) {
  char *response = api_get(client, "/");
  st_status_t status = parse_status(response);
  print_status(status);
  free_status(status);
  free(response);
}

void get_agent(st_client_t *client) {
  char *header = "Authorization: ";
  char *token;
  if (client->token == NULL) {
	token = "";
  } else {
	token = client->token;
  }
  header = realloc(header, strlen(header) + strlen(token));
  api_header_get(client, "/my/agent", &header, 1);
}
