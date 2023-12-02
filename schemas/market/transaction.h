#ifndef SPACETRADERS_SCHEMAS_MARKET_TRANSACTION_H_
#define SPACETRADERS_SCHEMAS_MARKET_TRANSACTION_H_
typedef struct {
  char* waypoint_symbol;
  char* ship_symbol;
  char* trade_symbol;
  enum { PURCHASE, SELL } type;
  int units;
  int price_per_unit;
  int total_price;
  char* timestamp;
} st_market_transaction_t;
#endif