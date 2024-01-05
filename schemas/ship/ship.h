#ifndef SPACETRADERS_SCHEMAS_SHIP_SHIP_H_
#define SPACETRADERS_SCHEMAS_SHIP_SHIP_H_
#include "cargo/cargo.h"
#include "crew.h"
#include "engine/engine.h"
#include "frame/frame.h"
#include "fuel/fuel.h"
#include "module/module.h"
#include "mount/mount.h"
#include "nav/nav.h"
#include "reactor/reactor.h"
#include "registration.h"
#include "scanned.h"

typedef struct {
  char *symbol;
  st_ship_registration_t registration;
  st_ship_nav_t nav;
  st_ship_crew_t crew;
  st_ship_frame_t frame;
  st_ship_reactor_t reactor;
  st_ship_engine_t engine;
  st_ship_module_t *modules;
  st_ship_mount_t *mounts;
  st_ship_cargo_t cargo;
  st_ship_fuel_t fuel;
} st_ship_t;
#endif