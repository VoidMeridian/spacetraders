#ifndef SPACETRADERS_TYPES_H
#define SPACETRADERS_TYPES_H
struct APIWrapper;
typedef struct STClient {
  struct APIWrapper* api;
  char* token;
} st_client_t;

#endif