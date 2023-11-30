#ifndef SPACETRADERS_FUNCTIONS_H
#define SPACETRADERS_FUNCTIONS_H
#include "spacetraders-types.h"
char *api_get(st_client_t *, char *);
char *api_header_get(st_client_t *, char *, char **, int);
char *api_post(st_client_t *, char *, char *);
#endif