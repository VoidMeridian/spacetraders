#include "spacetraders.h"
#include "spacetraders-functions.h"
#include <string.h>
#include <stdlib.h>
#include <cjson/cJSON.h>
#include <stdio.h>

char* json_string(cJSON* json, char* name) {
    cJSON* object = cJSON_GetObjectItemCaseSensitive(json, name);
    return cJSON_GetStringValue(object);
}

int json_int(cJSON* json, char* name) {
    cJSON* object = cJSON_GetObjectItemCaseSensitive(json, name);
    return cJSON_GetNumberValue(object);
}

void create_account(st_client_t *client, char *faction, char *symbol, char *email)
{
    cJSON* request = cJSON_CreateObject();
    cJSON_AddStringToObject(request, "faction", faction);
    cJSON_AddStringToObject(request, "symbol", symbol);
    cJSON_AddStringToObject(request, "email", email);
    char* data = cJSON_Print(request);
    cJSON_Delete(request);
#ifdef DEBUG
    printf("%s\n", data);
#endif
    char* response = api_post(client, "/register", data); 

    free(data);
    free(response);
}

void status(st_client_t *client)
{
    char* response = api_get(client, "/");
    cJSON* json = cJSON_Parse(response);
    cJSON* stats = cJSON_GetObjectItemCaseSensitive(json, "stats");
    // cJSON* leaderboards = cJSON_GetObjectItemCaseSensitive(json, "leaderboards");
    cJSON* serverResets = cJSON_GetObjectItemCaseSensitive(json, "serverResets");
    // cJSON* announcements = cJSON_GetObjectItemCaseSensitive(json, "announcements");
    // cJSON* links = cJSON_GetObjectItemCaseSensitive(json, "links");
    
    printf("SpaceTraders %s\n%s\nLast reset was %s\nNext reset is %s\n==========\n%s\n", json_string(json, "version"), json_string(json, "description"), json_string(json, "resetDate"), json_string(serverResets, "next"), json_string(json, "status"));

    printf("STATS\n%d Agents Registered\n%d Ships Registers\n%d Systems Added\n%d Waypoints Added\n", json_int(stats, "agents"), json_int(stats, "ships"), json_int(stats, "systems"), json_int(stats, "waypoints"));
    
    cJSON_Delete(json);
    free(response);
}

void get_agent(st_client_t *client)
{
    char *header = "Authorization: ";
    char *token;
    if (client->token == NULL)
    {
        token = "";
    }
    else
    {
        token = client->token;
    }
    header = realloc(header, strlen(header) + strlen(token));
    api_header_get(client, "/my/agent", &header, 1);
}
