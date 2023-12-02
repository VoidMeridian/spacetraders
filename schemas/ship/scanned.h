#ifndef SPACETRADERS_SCHEMAS_SHIP_SCANNED_H_
#define SPACETRADERS_SCHEMAS_SHIP_SCANNED_H_
#include "nav/nav.h"
#include "registration.h"
typedef struct {
  char* symbol;
  st_ship_registration_t registration;
  st_ship_nav_t nav;
  char* frame;
  char* reactor;
  char* engine;
  char** mounts;
} st_scanned_ship_t;
#endif