#ifndef SPACETRADERS_SCHEMAS_SHIP_MOUNT_MOUNT_H_
#define SPACETRADERS_SCHEMAS_SHIP_MOUNT_MOUNT_H_
#include "../requirements.h"
#include "enums/deposit.h"
#include "enums/mount.h"
typedef struct {
  st_ship_mount_types_t symbol;
  char* name;
  char* description;
  int strength;
  st_ship_mount_deposit_types_t deposits;
  st_ship_requirements_t requirements;
} st_ship_mount_t;
#endif