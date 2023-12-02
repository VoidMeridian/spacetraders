#ifndef SPACETRADERS_SCHEMAS_SHIP_SHIP_H_
#define SPACETRADERS_SCHEMAS_SHIP_SHIP_H_
#include "crew.h"
#include "frame/frame.h"
#include "nav/nav.h"
#include "registration.h"
#include "scanned.h"
typedef struct {
  char* symbol;
  st_ship_registration_t registration;
  st_ship_nav_t nav;
  st_ship_crew_t crew;
  st_ship_frame_t frame;
} st_ship_t;
#endif