#ifndef SPACETRADERS_SCHEMAS_WAYPOINT_SCANNED_WAYPOINT_H_
#define SPACETRADERS_SCHEMAS_WAYPOINT_SCANNED_WAYPOINT_H_
#include "../../enums/enums.h"
#include "../enums/type.h"
#include "trait.h"
#include "../base.h"
typedef struct {
  st_waypoint_base_t inner;
  st_faction_symbols_e faction_symbol;
  st_scanned_waypoint_trait_t *traits;
} st_scanned_waypoint_t;
#endif