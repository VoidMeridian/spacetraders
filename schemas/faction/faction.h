#ifndef SPACETRADERS_SCHEMAS_FACTION_FACTION_H_
#define SPACETRADERS_SCHEMAS_FACTION_FACTION_H_
#include "../bool.h"
#include "enums/symbol.h"
#include "traits.h"
typedef struct {
  st_faction_symbols_e symbol;
  char *name;
  char *description;
  char *headquarters;
  st_faction_traits_t traits;
  st_bool_t is_recruiting;
} st_faction_t;
#endif