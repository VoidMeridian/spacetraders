#include <stdio.h>
#include <stdlib.h>

#include "schemas.h"

void print_status(st_status_t status) {
  printf("SpaceTraders %s\n%s\n\tLast reset was %s\n\tNext reset is %s\n\t%s\n",
		 status.version, status.description, status.reset_date,
		 status.server_resets.name, status.status);

  printf(
	  "STATS\n\t%d Agents Registered\n\t%d Ships Registers\n\t%d Systems "
	  "Added\n\t%d Waypoints Added\n",
	  status.stats.agents, status.stats.ships, status.stats.systems,
	  status.stats.waypoints);
  printf("CREDIT LEADERBOARD\n");
  for (int i = 0; i < status.leaderboard.most_credits_len; i++) {
	st_leaderboard_count entry = status.leaderboard.most_credits[i];
	printf("\t%s %d\n", entry.agent, entry.count);
  }
  printf("CHART LEADERBOARD\n");
  for (int i = 0; i < status.leaderboard.most_charts_len; i++) {
	st_leaderboard_count entry = status.leaderboard.most_charts[i];
	printf("\t%s %d\n", entry.agent, entry.count);
  }

  printf("ANNOUNCEMENTS\n");
  for (int i = 0; i < status.announcements_len; i++) {
	st_status_entry entry = status.announcements[i];
	printf("\t%s %s\n", entry.name, entry.value);
  }
  printf("LINKS\n");
  for (int i = 0; i < status.links_len; i++) {
	st_status_entry entry = status.links[i];
	printf("\t%s %s\n", entry.name, entry.value);
  }
}

void free_status(st_status_t status) {
  free(status.announcements);
  free(status.description);
  free(status.leaderboard.most_charts);
  free(status.leaderboard.most_credits);
  free(status.links);
  free(status.reset_date);
  free(status.server_resets.name);
  free(status.server_resets.value);
  free(status.status);
  free(status.version);
}
