//
// Created by meridiandawn on 1/4/24.
//

#ifndef SPACETRADERS_SCHEMAS_SYSTEM_WAYPOINT_H_
#define SPACETRADERS_SCHEMAS_SYSTEM_WAYPOINT_H_
#include "../waypoint/base.h"
typedef struct {
  st_waypoint_base_t inner;
  char *orbits;
} st_system_waypoint_t;
#endif //SPACETRADERS_SCHEMAS_SYSTEM_WAYPOINT_H_
