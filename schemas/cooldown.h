#ifndef SPACETRADERS_COOLDOWN_H_
#define SPACETRADERS_COOLDOWN_H_
typedef struct {
  char* ship_symbol;
  int total_seconds;
  int remaining_seconds;
  char* expiration;
} st_cooldown_t;
#endif