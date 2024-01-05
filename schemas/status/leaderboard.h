#ifndef SPACETRADERS_SCHEMAS_STATUS_LEADERBOARD_H_
#define SPACETRADERS_SCHEMAS_STATUS_LEADERBOARD_H_
typedef struct {
  char *agent;
  int count;
} st_leaderboard_count;
typedef struct {
  st_leaderboard_count *most_credits;
  st_leaderboard_count *most_charts;
  int most_credits_len;
  int most_charts_len;
} st_status_leaderboard_t;
#endif