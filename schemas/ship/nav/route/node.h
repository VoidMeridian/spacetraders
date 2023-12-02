#ifndef SPACETRADERS_SCHEMAS_SHIP_NAV_ROUTE_NODE_H_
#define SPACETRADERS_SCHEMAS_SHIP_NAV_ROUTE_NODE_H_
#include "../../../enums/enums.h"
typedef struct {
  char* symbol;
  WAYPOINT_TYPE type;
  char* system_symbol;
  int x;
  int y;
} st_nav_route_node_t;
#endif