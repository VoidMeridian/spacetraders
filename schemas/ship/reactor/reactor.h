#ifndef SPACETRADERS_SCHEMAS_SHIP_REACTOR_REACTOR_H_
#define SPACETRADERS_SCHEMAS_SHIP_REACTOR_REACTOR_H_
#include "../requirements.h"
#include "enums/type.h"
typedef struct {
  st_ship_reactor_types_t symbol;
  char* name;
  char* description;
  int condition;
  int power_output;
  st_ship_reactor_requirements_t requirements;
} st_ship_reactor_t;
#endif