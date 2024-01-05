#ifndef SPACETRADERS_SCHEMAS_SHIP_REGISTRATION_H_
#define SPACETRADERS_SCHEMAS_SHIP_REGISTRATION_H_
#include "role.h"
typedef struct {
  char *name;
  char *faction_symbol;
  st_ship_roles_e role;
} st_ship_registration_t;
#endif