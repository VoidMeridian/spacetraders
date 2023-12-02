#ifndef SPACETRADERS_SCHEMAS_SHIP_FRAME_FRAME_H_
#define SPACETRADERS_SCHEMAS_SHIP_FRAME_FRAME_H_
#include "enums/type.h"
#include "requirements.h"
typedef struct {
  FRAME_TYPE frame;
  char* name;
  char* description;
  int condition;
  int module_slots;
  int mount_points;
  int fuel_capacity;
  st_ship_frame_requirements_t requirements;
} st_ship_frame_t;
#endif