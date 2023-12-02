#ifndef SPACETRADERS_SCHEMAS_CONTRACT_CONTRACT_H_
#define SPACETRADERS_SCHEMAS_CONTRACT_CONTRACT_H_
#include "../bool.h"
#include "terms.h"
typedef struct {
  char* id;
  char* faction_symbol;
  enum { PROCUREMENT, TRANSPORT, SHUTTLE } type;
  st_contract_terms_t terms;
  st_bool_t accepted;
  st_bool_t fulfilled;
  char* accept_deadline;
} st_contract_t;
#endif