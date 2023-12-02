#ifndef SPACETRADERS_SCHEMAS_SHIP_MOUNT_ENUMS_DEPOSIT_H_
#define SPACETRADERS_SCHEMAS_SHIP_MOUNT_ENUMS_DEPOSIT_H_
typedef enum {
  QUARTZ_SAND = 1 << 0,
  SILICON_CRYSTALS = 1 << 1,
  PRECIOUS_STONES = 1 << 2,
  ICE_WATER = 1 << 3,
  AMMONIA_ICE = 1 << 4,
  IRON_ORE = 1 << 5,
  COPPER_ORE = 1 << 6,
  SILVER_ORE = 1 << 7,
  ALUMINUM_ORE = 1 << 8,
  GOLD_ORE = 1 << 9,
  PLATINUM_ORE = 1 << 10,
  DIAMONDS = 1 << 11,
  URANITE_ORE = 1 << 12,
  MERITIUM_ORE = 1 << 13
} st_ship_mount_deposit_types_t;
#endif