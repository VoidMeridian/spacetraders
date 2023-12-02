#ifndef SPACETRADERS_SCHEMAS_SHIP_REQUIREMENTS_H_
#define SPACETRADERS_SCHEMAS_SHIP_REQUIREMENTS_H_
typedef struct {
  int power;
  int crew;
  int slots;
} st_ship_requirements_t;
typedef st_ship_requirements_t st_ship_reactor_requirements_t;
typedef st_ship_requirements_t st_ship_frame_requirements_t;
#endif