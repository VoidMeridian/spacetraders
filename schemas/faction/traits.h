#ifndef SPACETRADERS_SCHEMAS_FACTION_TRAITS_H_
#define SPACETRADERS_SCHEMAS_FACTION_TRAITS_H_
#include "enums/trait.h"
typedef struct {
  FACTION_TRAIT symbol;
  char* name;
  char* description;
} st_faction_traits_t;
#endif