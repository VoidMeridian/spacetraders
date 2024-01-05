#ifndef SPACETRADERS_SCHEMAS_SYSTEM_CONNECTED_H_
#define SPACETRADERS_SCHEMAS_SYSTEM_CONNECTED_H_
#include "../enums/enums.h"
#include "base.h"
typedef struct {
  char *faction_symbol;
  int distance;
} st_connected_system_t;
#endif