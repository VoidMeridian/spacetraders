#ifndef SPACETRADERS_SCHEMAS_STATUS_STATUS_H_
#define SPACETRADERS_SCHEMAS_STATUS_STATUS_H_
#include "entry.h"
#include "leaderboard.h"
#include "stats.h"
typedef struct {
  char* status;
  char* version;
  char* reset_date;
  char* description;
  st_status_stats_t stats;
  st_status_leaderboard_t leaderboard;
  st_status_entry server_resets;
  st_status_entry* announcements;
  st_status_entry* links;
  int announcements_len;
  int links_len;
} st_status_t;
#endif