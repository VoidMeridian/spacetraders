#ifndef SPACETRADERS_H
#define SPACETRADERS_H
#include "spacetraders-types.h"
st_client_t* init();
void cleanup(st_client_t* client);
void st_error(char* s);
void status(st_client_t* client);
void create_account(st_client_t* client, char* faction, char* symbol,
                    char* email);
void get_agent(st_client_t* client);

extern const char* ST_ERROR;
#endif
