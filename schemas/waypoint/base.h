//
// Created by meridiandawn on 1/4/24.
//

#ifndef SPACETRADERS_SCHEMAS_WAYPOINT_BASE_H_
#define SPACETRADERS_SCHEMAS_WAYPOINT_BASE_H_

#include "enums/type.h"
typedef struct {
  char *symbol;
  st_waypoint_types_e type;
  int x;
  int y;
  char **orbitals;
} st_waypoint_base_t;
#endif //SPACETRADERS_SCHEMAS_WAYPOINT_BASE_H_
