#ifndef SPACETRADERS_SCHEMAS_ACCOUNT_H_
#define SPACETRADERS_SCHEMAS_ACCOUNT_H_
#include "agent.h"
#include "contract/contract.h"
#include "faction/faction.h"
#include "ship/ship.h"
typedef struct {
  st_agent_t agent;
  st_contract_t contract;
  st_faction_t faction;
  st_ship_t ship;
  char* token;
} st_account_t;
#endif