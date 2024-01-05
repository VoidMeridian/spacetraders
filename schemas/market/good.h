#ifndef SPACETRADERS_SCHEMAS_MARKET_GOOD_H_
#define SPACETRADERS_SCHEMAS_MARKET_GOOD_H_
#include "../enums/enums.h"
typedef struct {
  st_trade_symbols_e symbol;
  char *name;
  char *description;
} st_market_good_t;
typedef st_market_good_t st_trade_good_t;
#endif