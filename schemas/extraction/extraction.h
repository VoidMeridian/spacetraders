#ifndef SPACETRADERS_SCHEMAS_EXTRACTION_EXTRACTION_H_
#define SPACETRADERS_SCHEMAS_EXTRACTION_EXTRACTION_H_
#include "yield.h"
typedef struct {
  char *ship_symbol;
  st_extraction_yield_t yield;
} st_extraction_t;
#endif