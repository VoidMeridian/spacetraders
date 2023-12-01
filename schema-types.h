#ifndef SPACETRADERS_SCHEMA_TYPES_H_
#define SPACETRADERS_SCHEMA_TYPES_H_
typedef enum { WEAK, GROWING, STRONG, RESTRICTED } ACTIVITY_LEVEL;
typedef enum {
  COSMIC,
  VOID,
  GALACTIC,
  QUANTUM,
  DOMINION,
  ASTRO,
  CORSAIRS,
  OBSIDIAN,
  AEGIS,
  UNITED,
  SOLITARY,
  COBALT,
  OMEGA,
  ECHO,
  LORDS,
  CULT,
  ANCIENTS,
  SHADOW,
  ETHEREAL
} FACTION_SYMBOLS;
typedef enum {
  PRECIOUS_STONES,
  QUARTZ_SAND,
  SILICON_CRYSTALS,
  AMMONIA_ICE,
  LIQUID_HYDROGEN,
  LIQUID_NITROGEN,
  ICE_WATER,
  EXOTIC_MATTER,
  ADVANCED_CIRCUITRY,
  GRAVITON_EMITTERS,
  IRON,
  IRON_ORE,
  COPPER,
  COPPER_ORE,
  ALUMINUM,
  ALUMINUM_ORE,
  SILVER,
  SILVER_ORE,
  GOLD,
  GOLD_ORE,
  PLATINUM,
  PLATINUM_ORE,
  DIAMONDS,
  URANITE,
  URANITE_ORE,
  MERITIUM,
  MERITIUM_ORE,
  HYDROCARBON,
  ANTIMATTER,
  FAB_MATS,
  FERTILIZERS,
  FABRICS,
  FOOD,
  JEWELRY,
  MACHINERY,
  FIREARMS,
  ASSAULT_RIFLES,
  MILITARY_EQUIPMENT,
  EXPLOSIVES,
  LAB_INSTRUMENTS,
  AMMUNITION,
  ELECTRONICS,
  SHIP_PLATING,
  SHIP_PARTS,
  EQUIPMENT,
  FUEL,
  MEDICINE,
  DRUGS,
  CLOTHING,
  MICROPROCESSORS,
  PLASTICS,
  POLYNUCLEOTIDES,
  BIOCOMPOSITES,
  QUANTUM_STABILIZERS,
  NANOBOTS,
  AI_MAINFRAMES,
  QUANTUM_DRIVES,
  ROBOTIC_DRONES,
  CYBER_IMPLANTS,
  GENE_THERAPEUTICS,
  NEURAL_CHIPS,
  MOOD_REGULATORS,
  VIRAL_AGENTS,
  MICRO_FUSION_GENERATORS,
  SUPERGRAINS,
  LASER_RIFLES,
  HOLOGRAPHICS,
  SHIP_SALVAGE,
  RELIC_TECH,
  NOVEL_LIFEFORMS,
  BOTANICAL_SPECIMENS,
  CULTURAL_ARTIFACTS,
  FRAME_PROBE,
  FRAME_DRONE,
  FRAME_INTERCEPTOR,
  FRAME_RACER,
  FRAME_FIGHTER,
  FRAME_FRIGATE,
  FRAME_SHUTTLE,
  FRAME_EXPLORER,
  FRAME_MINER,
  FRAME_LIGHT_FREIGHTER,
  FRAME_HEAVY_FREIGHTER,
  FRAME_TRANSPORT,
  FRAME_DESTROYER,
  FRAME_CRUISER,
  FRAME_CARRIER,
  REACTOR_SOLAR_I,
  REACTOR_FUSION_I,
  REACTOR_FISSION_I,
  REACTOR_CHEMICAL_I,
  REACTOR_ANTIMATTER_I,
  ENGINE_IMPULSE_DRIVE_I,
  ENGINE_ION_DRIVE_I,
  ENGINE_ION_DRIVE_II,
  ENGINE_HYPER_DRIVE_I,
  MODULE_MINERAL_PROCESSOR_I,
  MODULE_GAS_PROCESSOR_I,
  MODULE_CARGO_HOLD_I,
  MODULE_CARGO_HOLD_II,
  MODULE_CARGO_HOLD_III,
  MODULE_CREW_QUARTERS_I,
  MODULE_ENVOY_QUARTERS_I,
  MODULE_PASSENGER_CABIN_I,
  MODULE_MICRO_REFINERY_I,
  MODULE_SCIENCE_LAB_I,
  MODULE_JUMP_DRIVE_I,
  MODULE_JUMP_DRIVE_II,
  MODULE_JUMP_DRIVE_III,
  MODULE_WARP_DRIVE_I,
  MODULE_WARP_DRIVE_II,
  MODULE_WARP_DRIVE_III,
  MODULE_SHIELD_GENERATOR_I,
  MODULE_SHIELD_GENERATOR_II,
  MODULE_ORE_REFINERY_I,
  MODULE_FUEL_REFINERY_I,
  MOUNT_GAS_SIPHON_I,
  MOUNT_GAS_SIPHON_II,
  MOUNT_GAS_SIPHON_III,
  MOUNT_SURVEYOR_I,
  MOUNT_SURVEYOR_II,
  MOUNT_SURVEYOR_III,
  MOUNT_SENSOR_ARRAY_I,
  MOUNT_SENSOR_ARRAY_II,
  MOUNT_SENSOR_ARRAY_III,
  MOUNT_MINING_LASER_I,
  MOUNT_MINING_LASER_II,
  MOUNT_MINING_LASER_III,
  MOUNT_LASER_CANNON_I,
  MOUNT_MISSILE_LAUNCHER_I,
  MOUNT_TURRET_I,
  SHIP_PROBE,
  SHIP_MINING_DRONE,
  SHIP_SIPHON_DRONE,
  SHIP_INTERCEPTOR,
  SHIP_LIGHT_HAULER,
  SHIP_COMMAND_FRIGATE,
  SHIP_EXPLORER,
  SHIP_HEAVY_FREIGHTER,
  SHIP_LIGHT_SHUTTLE,
  SHIP_ORE_HOUND,
  SHIP_REFINING_FREIGHTER,
  SHIP_SURVEYOR
} TRADE_SYMBOL;
typedef int st_bool_t;
#define FALSE 0
#define TRUE !FALSE
typedef struct {
  char* account_id;
  char* symbol;
  char* headquarters;
  int credits;
  char* starting_faction;
  int ship_count;
} st_agent_t;
typedef struct {
  char* waypoint_symbol;
  char* submitted_by;
  char* submitted_on;
} st_chart_t;
typedef struct {
  char* symbol;
  char* sector_symbol;
  enum {
    NEUTRON_STAR,
    RED_STAR,
    ORANGE_STAR,
    BLUE_STAR,
    YOUNG_STAR,
    WHITE_DWARF,
    BLACK_HOLE,
    HYPERGIANT,
    NEBULA,
    UNSTABLE
  } type;
  char* faction_symbol;
  int x;
  int y;
  int distance;
} st_connected_system_t;
typedef struct {
  TRADE_SYMBOL trade_symbol;
  int required;
  int fulfilled;
} st_construction_material_t;
typedef struct {
  char* symbol;
  st_construction_material_t* materials;
  st_bool_t is_complete;
} st_construction_t;
typedef struct {
  int on_accepted;
  int on_fulfilled;
} st_contract_payment_t;
typedef struct {
  char* trade_symbol;
  char* destination_symbol;
  int units_required;
  int units_fulfilled;
} st_contract_deliver_goods_t;
typedef struct {
  char* deadline;
  st_contract_payment_t payment;
  st_contract_deliver_goods_t* deliver;
} st_contract_terms_t;
typedef struct {
  char* id;
  char* faction_symbol;
  enum { PROCUREMENT, TRANSPORT, SHUTTLE } type;
  st_contract_terms_t terms;
  st_bool_t accepted;
  st_bool_t fulfilled;
  char* accept_deadline;
} st_contract_t;
typedef struct {
  char* ship_symbol;
  int total_seconds;
  int remaining_seconds;
  char* expiration;
} st_cooldown_t;
typedef struct {
  TRADE_SYMBOL trade_symbol;
  int units;
} st_extraction_yield_t;
typedef struct {
  char* ship_symbol;
  st_extraction_yield_t yield;
} st_extraction_t;
typedef struct {
  enum {
    BUREAUCRATIC,
    SECRETIVE,
    CAPITALISTIC,
    INDUSTRIOUS,
    PEACEFUL,
    DISTRUSTFUL,
    WELCOMING,
    SMUGGLERS,
    SCAVENGERS,
    REBELLIOUS,
    EXILES,
    PIRATES,
    RAIDERS,
    CLAN,
    GUILD,
    DOMINION,
    FRINGE,
    FORSAKEN,
    ISOLATED,
    LOCALIZED,
    ESTABLISHED,
    NOTABLE,
    DOMINANT,
    INESCAPABLE,
    INNOVATIVE,
    BOLD,
    VISIONARY,
    CURIOUS,
    DARING,
    EXPLORATORY,
    RESOURCEFUL,
    FLEXIBLE,
    COOPERATIVE,
    UNITED,
    STRATEGIC,
    INTELLIGENT,
    RESEARCH_FOCUSED,
    COLLABORATIVE,
    PROGRESSIVE,
    MILITARISTIC,
    TECHNOLOGICALLY_ADVANCED,
    AGGRESSIVE,
    IMPERIALISTIC,
    TREASURE_HUNTERS,
    DEXTEROUS,
    UNPREDICTABLE,
    BRUTAL,
    FLEETING,
    ADAPTABLE,
    SELF_SUFFICIENT,
    DEFENSIVE,
    PROUD,
    DIVERSE,
    INDEPENDENT,
    SELF_INTERESTED,
    FRAGMENTED,
    COMMERCIAL,
    FREE_MARKETS,
    ENTREPRENEURIAL
  } symbol;
  char* name;
  char* description;
} st_faction_traits_t;
typedef struct {
  FACTION_SYMBOLS symbol;
  char* name;
  char* description;
  char* headquarters;
  st_faction_traits_t traits;
  st_bool_t is_recruiting;
} st_faction_t;
typedef struct {
  char** connections;
} st_jumpgate_t;
typedef struct {
  TRADE_SYMBOL symbol;
  char* name;
  char* description;
} st_market_good_t;
typedef struct {
  char* waypoint_symbol;
  char* ship_symbol;
  char* trade_symbol;
  enum { PURCHASE, SELL } type;
  int units;
  int price_per_unit;
  int total_price;
  char* timestamp;
} st_market_transaction_t;
typedef struct {
  int total;
  int page;
  int limit;
} st_meta_t;
typedef struct {
  char* symbol;
  st_market_good_t* exports;
  st_market_good_t* imports;
  st_market_good_t* exchange;
  st_market_transaction_t* transactions;
  st_market_good_t* trade_goods;
} st_market_t;
typedef struct {
  char* name;
  char* faction_symbol;
  enum {
    FABRICATOR,
    HARVESTER,
    HAULER,
    INTERCEPTOR,
    EXCAVATOR,
    TRANSPORT,
    REPAIR,
    SURVEYOR COMMAND,
    CARRIER,
    PATROL,
    SATELLITE,
    EXPLORER,
    REFINERY
  } role;
} st_ship_registration_t;
typedef struct {
  char* symbol;
  enum {
    PLANET,
    GAS_GIANT,
    MOON,
    ORBITAL_STATION,
    JUMP_GATE,
    ASTEROID_FIELD,
    ASTEROID,
    ENGINEERED_ASTEROID,
    ASTEROID_BASE,
    NEBULA,
    DEBRIS_FIELD,
    GRAVITY_WELL,
    ARTIFICIAL_GRAVITY_WELL,
    FUEL_STATION
  } type;
  char* system_symbol;
  int x;
  int y;
} st_nav_route_node_t;
typedef struct {
  st_nav_route_node_t destination;
  st_nav_route_node_t origin;
  char* departure_time;
  char* arrival_time;
} st_ship_nav_route_t;
typedef struct {
  char* system_symbol;
  char* waypoint_symbol;
  st_ship_nav_route_t route;
  char* status;
  char* flight_mode;
} st_ship_nav_t;
typedef struct {
  char* symbol;
  st_ship_registration_t registration;
  st_ship_nav_t nav;
  char* frame;
  char* reactor;
  char* engine;
  char** mounts;
} st_scanned_ship_t;
typedef struct {
  char* agent;
  int count;
} st_leaderboard_count;
typedef struct {
  char* name;
  char* value;
} st_bi_str;
typedef struct {
  char* status;
  char* version;
  char* reset_date;
  char* description;
  struct {
    int agents;
    int ships;
    int systems;
    int waypoints;
  } stats;
  struct {
    st_leaderboard_count* most_credits;
    st_leaderboard_count* most_charts;
    int most_credits_len;
    int most_charts_len;
  } leaderboard;
  st_bi_str server_resets;
  st_bi_str* announcements;
  st_bi_str* links;
  int announcements_len;
  int links_len;
} st_status_t;
typedef struct {
  st_agent_t agent;
  st_contract_t contract;
  st_faction_t faction;
  // st_ship_t ship;
  char* token;
} st_account_info_t;
#endif