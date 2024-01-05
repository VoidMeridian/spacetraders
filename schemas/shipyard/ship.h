//
// Created by meridiandawn on 1/4/24.
//

#ifndef SPACETRADERS_SCHEMAS_SHIPYARD_SHIP_H_
#define SPACETRADERS_SCHEMAS_SHIPYARD_SHIP_H_
#include "../ship/type.h"
#include "../enums/enums.h"
#include "../ship/frame/frame.h"
#include "../ship/reactor/reactor.h"
#include "../ship/engine/engine.h"
#include "../ship/module/module.h"
#include "../ship/mount/mount.h"
#include "../ship/crew.h"
typedef struct {
  st_ship_types_e type;
  char *name;
  char *description;
  enum {
	SHIPYARD_SUPPLY_SCARCE,
	SHIPYARD_SUPPLY_LIMITED,
	SHIPYARD_SUPPLY_MODERATE,
	SHIPYARD_SUPPLY_HIGH,
	SHIPYARD_SUPPLY_ABUNDANT
  } supply;
  st_activity_level_e activity;
  int purchase_price;
  st_ship_frame_t frame;
  st_ship_reactor_t reactor;
  st_ship_engine_t engine;
  st_ship_module_t *modules;
  st_ship_mount_t *mounts;
  st_ship_crew_t crew;
  int modification_few;
} st_shipyard_ship_t;
#endif //SPACETRADERS_SCHEMAS_SHIPYARD_SHIP_H_
