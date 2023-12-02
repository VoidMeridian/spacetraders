#ifndef SPACETRADERS_SCHEMAS_MARKET_GOOD_H_
#define SPACETRADERS_SCHEMAS_MARKET_GOOD_H_
#include "../enums/enums.h"
typedef struct {
  st_trade_items_t symbol;
  char* name;
  char* description;
} st_market_good_t;
#endif