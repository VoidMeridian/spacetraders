#ifndef SPACETRADERS_SCHEMAS_SHIP_CREW_H_
#define SPACETRADERS_SCHEMAS_SHIP_CREW_H_
typedef struct {
  int current;
  int required;
  int capacity;
  enum { ROTATION_STRICT, ROTATION_RELAXED } rotation;
  int morale;
  int wages;
} st_ship_crew_t;
#endif