//
// Created by meridiandawn on 1/4/24.
//

#ifndef SPACETRADERS_SCHEMAS_SHIPYARD_TRANSACTIONS_H_
#define SPACETRADERS_SCHEMAS_SHIPYARD_TRANSACTIONS_H_

typedef struct {
  char *waypoint_symbol;
  char *ship_symbol;
  char *ship_type;
  int price;
  char *agent_symbol;
  char *timestamp;
} st_shipyard_transaction_t;

#endif //SPACETRADERS_SCHEMAS_SHIPYARD_TRANSACTIONS_H_
