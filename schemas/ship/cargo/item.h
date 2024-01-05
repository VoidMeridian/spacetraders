#ifndef SPACETRADERS_SCHEMAS_SHIP_CARGO_ITEM_H_
#define SPACETRADERS_SCHEMAS_SHIP_CARGO_ITEM_H_
#include "../../enums/enums.h"
typedef struct {
  st_trade_symbols_e symbol;
  char *name;
  char *description;
  int units;
} st_ship_cargo_item_t;
#endif