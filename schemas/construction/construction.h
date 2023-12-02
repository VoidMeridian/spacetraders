#ifndef SPACETRADERS_SCHEMAS_CONSTRUCTION_CONSTRUCTION_H_
#define SPACETRADERS_SCHEMAS_CONSTRUCTION_CONSTRUCTION_H_
#include "../bool.h"
#include "material.h"
typedef struct {
  char* symbol;
  st_construction_material_t* materials;
  st_bool_t is_complete;
} st_construction_t;
#endif