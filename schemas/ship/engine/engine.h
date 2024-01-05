#ifndef SPACETRADERS_SCHEMAS_SHIP_ENGINE_ENGINE_H_
#define SPACETRADERS_SCHEMAS_SHIP_ENGINE_ENGINE_H_
#include "../requirements.h"
#include "enums/type.h"
typedef struct {
  st_ship_engine_types_e symbol;
  char *name;
  char *description;
  int condition;
  int speed;
  st_ship_requirements_t requirements;
} st_ship_engine_t;
#endif