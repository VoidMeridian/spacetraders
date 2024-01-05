#ifndef SPACETRADERS_SCHEMAS_SHIP_CARGO_CARGO_H_
#define SPACETRADERS_SCHEMAS_SHIP_CARGO_CARGO_H_
#include "item.h"
typedef struct {
  int capacity;
  int units;
  st_ship_cargo_item_t *inventory;
} st_ship_cargo_t;
#endif