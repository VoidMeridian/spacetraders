#ifndef SPACETRADERS_SCHEMAS_SHIP_NAV_ROUTE_ROUTE_H_
#define SPACETRADERS_SCHEMAS_SHIP_NAV_ROUTE_ROUTE_H_
#include "node.h"
typedef struct {
  st_nav_route_node_t destination;
  st_nav_route_node_t origin;
  char* departure_time;
  char* arrival_time;
} st_ship_nav_route_t;
#endif