#ifndef SPACETRADERS_SCHEMAS_CONTRACT_PAYMENT_H_
#define SPACETRADERS_SCHEMAS_CONTRACT_PAYMENT_H_
typedef struct {
  int on_accepted;
  int on_fulfilled;
} st_contract_payment_t;
#endif