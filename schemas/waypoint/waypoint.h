#ifndef SPACETRADERS_SCHEMAS_WAYPOINT_WAYPOINT_H_
#define SPACETRADERS_SCHEMAS_WAYPOINT_WAYPOINT_H_
#include "scanned/waypoint.h"
#include "base.h"
#include "modifier.h"

typedef struct {
  st_scanned_waypoint_t inner;
  char *orbits;
  st_waypoint_modifier_t modifier;
  st_chart_t chart;
  st_bool_t is_under_construction;
} st_waypoint_t;
#endif