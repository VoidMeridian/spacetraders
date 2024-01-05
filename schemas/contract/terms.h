#ifndef SPACETRADERS_SCHEMAS_CONTRACT_TERMS_H_
#define SPACETRADERS_SCHEMAS_CONTRACT_TERMS_H_
#include "goods.h"
#include "payment.h"
typedef struct {
  char *deadline;
  st_contract_payment_t payment;
  st_contract_deliver_goods_t *deliver;
} st_contract_terms_t;
#endif