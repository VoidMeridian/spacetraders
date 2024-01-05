#ifndef SPACETRADERS_SCHEMAS_CONTRACT_GOODS_H_
#define SPACETRADERS_SCHEMAS_CONTRACT_GOODS_H_
typedef struct {
  char *trade_symbol;
  char *destination_symbol;
  int units_required;
  int units_fulfilled;
} st_contract_deliver_goods_t;

#endif