#ifndef SPACETRADERS_SCHEMAS_SYSTEM_CONNECTED_H_
#define SPACETRADERS_SCHEMAS_SYSTEM_CONNECTED_H_
#include "../enums/enums.h"
typedef struct {
  char* symbol;
  char* sector_symbol;
  STAR_TYPE type;
  char* faction_symbol;
  int x;
  int y;
  int distance;
} st_connected_system_t;
#endif