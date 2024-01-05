#ifndef SPACETRADERS_SCHEMAS_SHIP_FUEL_CONSUMED_H_
#define SPACETRADERS_SCHEMAS_SHIP_FUEL_CONSUMED_H_
typedef struct {
  int amount;
  char *timestamp;
} st_ship_fuel_consumed_t;
#endif