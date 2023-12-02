#ifndef SPACETRADERS_AGENT_H_
#define SPACETRADERS_AGENT_H_

typedef struct {
  char* account_id;
  char* symbol;
  char* headquarters;
  int credits;
  char* starting_faction;
  int ship_count;
} st_agent_t;

#endif