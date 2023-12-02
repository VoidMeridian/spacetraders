#ifndef SPACETRADERS_SCHEMAS_SHIP_FUEL_FUEL_H_
#define SPACETRADERS_SCHEMAS_SHIP_FUEL_FUEL_H_
#include "consumed.h"
typedef struct {
  int current;
  int capacity;
  st_ship_fuel_consumed_t consumed;
} st_ship_fuel_t;

#endif