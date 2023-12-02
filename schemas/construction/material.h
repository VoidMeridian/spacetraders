#ifndef SPACETRADERS_SCHEMAS_CONSTRUCTION_MATERIAL_H_
#define SPACETRADERS_SCHEMAS_CONSTRUCTION_MATERIAL_H_
#include "../enums/enums.h"
typedef struct {
  TRADE_SYMBOL trade_symbol;
  int required;
  int fulfilled;
} st_construction_material_t;
#endif