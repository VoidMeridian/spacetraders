#ifndef SPACETRADERS_SCHEMAS_SYSTEM_BASE_H_
#define SPACETRADERS_SCHEMAS_SYSTEM_BASE_H_
#include "../enums/enums.h"
#include "waypoint.h"
typedef struct {
  char *symbol;
  char *sector_symbol;
  st_star_types_e type;
  int x;
  int y;
  st_system_waypoint_t *waypoints;
} st_system_base_t;
#endif