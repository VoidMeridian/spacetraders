#ifndef SPACETRADERS_SCHEMAS_WAYPOINT_SCANNED_WAYPOINT_H_
#define SPACETRADERS_SCHEMAS_WAYPOINT_SCANNED_WAYPOINT_H_
#include "../../enums/enums.h"
#include "../enums/type.h"
#include "trait.h"
typedef struct {
  char* symbol;
  st_waypoint_types_t type;
  char* system_symbol;
  int x;
  int y;
  char** orbitals;
  st_faction_symbols_t symbol;
  st_scanned_waypoint_trait_t* traits;
} st_scanned_waypoint_t;
#endif