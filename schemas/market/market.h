#ifndef SPACETRADERS_SCHEMAS_MARKET_MARKET_H_
#define SPACETRADERS_SCHEMAS_MARKET_MARKET_H_
#include "good.h"
#include "transaction.h"
typedef struct {
  char* symbol;
  st_market_good_t* exports;
  st_market_good_t* imports;
  st_market_good_t* exchange;
  st_market_transaction_t* transactions;
  st_market_good_t* trade_goods;
} st_market_t;
#endif