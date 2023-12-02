#ifndef SPACETRADERS_SCHEMAS_EXTRACTION_YIELD_H_
#define SPACETRADERS_SCHEMAS_EXTRACTION_YIELD_H_
#include "../enums/enums.h"
typedef struct {
  TRADE_SYMBOL trade_symbol;
  int units;
} st_extraction_yield_t;
#endif