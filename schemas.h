#ifndef SPACETRADERS_SCHEMAS_H_
#define SPACETRADERS_SCHEMAS_H_
#include <cjson/cJSON.h>

#include "schema-types.h"
typedef cJSON st_json_t;
st_agent_t parse_agent(st_json_t*);
st_status_t parse_status(char*);
void print_status(st_status_t);
void free_status(st_status_t);
char* parse_account_request(char*, char*, char*);
#endif