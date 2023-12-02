#ifndef SPACETRADERS_SCHEMAS_WAYPOINT_SCANNED_TRAIT_H_
#define SPACETRADERS_SCHEMAS_WAYPOINT_SCANNED_TRAIT_H_
#include "../enums/trait.h"
typedef struct {
  WAYPOINT_TRAIT symbol;
  char* name;
  char* description;
} st_scanned_waypoint_trait_t;
#endif