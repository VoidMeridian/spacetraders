//
// Created by meridiandawn on 1/4/24.
//

#ifndef SPACETRADERS_SCHEMAS_SHIPYARD_SHIPYARD_H_
#define SPACETRADERS_SCHEMAS_SHIPYARD_SHIPYARD_H_
#include "../ship/type.h"
#include "transactions.h"
#include "ship.h"

typedef struct {
  char *symbol;
  st_ship_types_e ship_type;
  st_shipyard_transaction_t *transactions;
  st_shipyard_ship_t *ships;
} st_shipyard_t;
#endif  // SPACETRADERS_SCHEMAS_SHIPYARD_SHIPYARD_H_


