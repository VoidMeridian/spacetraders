//
// Created by meridiandawn on 1/4/24.
//

#ifndef SPACETRADERS_SCHEMAS_SIPHON_SIPHON_H_
#define SPACETRADERS_SCHEMAS_SIPHON_SIPHON_H_
#include "yield.h"
typedef struct {
  char *ship_symbol;
  st_siphon_yield_t yield;
  int units;
} st_siphon_t;
#endif //SPACETRADERS_SCHEMAS_SIPHON_SIPHON_H_
