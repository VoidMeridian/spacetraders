#ifndef SPACETRADERS_SCHEMAS_SYSTEM_SCANNED_H_
#define SPACETRADERS_SCHEMAS_SYSTEM_SCANNED_H_
#include "../enums/enums.h"
typedef struct {
  char* symbol;
  char* sector_symbol;
  st_star_types_t type;
  int x;
  int y;
  int distance;
} st_scanned_system_t;
#endif