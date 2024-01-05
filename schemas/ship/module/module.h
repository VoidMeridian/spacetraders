#ifndef SPACETRADERS_SCHEMAS_SHIP_MODULE_MODULE_H_
#define SPACETRADERS_SCHEMAS_SHIP_MODULE_MODULE_H_
#include "../requirements.h"
#include "enums/type.h"
typedef struct {
  st_ship_module_types_e symbol;
  int capacity;
  int range;
  char *name;
  char *description;
  st_ship_requirements_t requirements;
} st_ship_module_t;
#endif