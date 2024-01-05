#ifndef SPACETRADERS_SCHEMAS_SHIP_NAV_NAV_H_
#define SPACETRADERS_SCHEMAS_SHIP_NAV_NAV_H_
#include "route/route.h"
typedef struct {
  char *system_symbol;
  char *waypoint_symbol;
  st_ship_nav_route_t route;
  char *status;
  char *flight_mode;
} st_ship_nav_t;
#endif