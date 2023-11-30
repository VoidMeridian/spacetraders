#include "spacetraders.h"
#include <curl/curl.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
const char* ST_ERROR = "";
#ifdef DEBUG
char *BASEURL = "https://stoplight.io/mocks/spacetraders/spacetraders/96627693";
#else
char *BASEURL = "https://api.spacetraders.io/v2";
#endif
struct APIWrapper
{
    CURL *inner;
};

void st_error(char* s) {
    printf("%s: %s\n", s, ST_ERROR);
}

st_client_t *init()
{
#ifdef DEBUG
    printf("USING BASEURL: %s\n", BASEURL);
#endif
    st_client_t *client = calloc(1, sizeof(st_client_t));
    if (client == NULL) {
        ST_ERROR = strerror(errno);
        return NULL;
    }
    struct APIWrapper *api = calloc(1, sizeof(struct APIWrapper));
    if (api == NULL) {
        ST_ERROR = strerror(errno);
        return NULL;
    }
    CURLcode code = curl_global_init(CURL_GLOBAL_ALL);
    if (code != 0) {
        ST_ERROR = curl_easy_strerror(code);
        return NULL;
    }
    api->inner = curl_easy_init();
    if (api->inner == NULL) {
        ST_ERROR = curl_easy_strerror(CURLE_FAILED_INIT);
        return NULL;
    }
    client->api = api;
    client->token = NULL;
    return client;
}

size_t strwrite(char *ptr, size_t size, size_t nmemb, void *userdata)
{
    char *strdata = calloc(nmemb + 1, size);

    char** userptr = (char**)(userdata);
    *userptr = memcpy(strdata, ptr, size * nmemb);
    (*userptr)[(size * nmemb) + size] = 0;
    return size * nmemb;
}

char *make_url(char *route)
{
    int size = strlen(route) + strlen(BASEURL);
    char *url = calloc(size + 1, sizeof(char));
    snprintf(url, size + 1, "%s%s", BASEURL, route);
#ifdef DEBUG
    printf("ROUTE: %s\n", url);
#endif
    return url;
}

struct curl_slist* add_headers(st_client_t *client, char **headers, int length)
{
    struct curl_slist *header = NULL;
    header = curl_slist_append(header, "Accept: application/json");
    for (int i = 0; i < length; i++)
    {
        header = curl_slist_append(header, headers[i]);
    }
    curl_easy_setopt(client->api->inner, CURLOPT_HTTPHEADER, header);
    return header;
}

char *api_get(st_client_t *client, char *route)
{
    char* url = make_url(route);
    curl_easy_setopt(client->api->inner, CURLOPT_URL, url);
    curl_easy_setopt(client->api->inner, CURLOPT_HTTPGET, 1L);

    char *response_string = NULL;
    curl_easy_setopt(client->api->inner, CURLOPT_WRITEFUNCTION, strwrite);
    curl_easy_setopt(client->api->inner, CURLOPT_WRITEDATA, &response_string);

    curl_easy_perform(client->api->inner);
    free(url);
    return response_string;
}

char *api_header_get(st_client_t *client, char *route, char **headers, int length)
{
    char* url = make_url(route);
    curl_easy_setopt(client->api->inner, CURLOPT_URL, url);
    curl_easy_setopt(client->api->inner, CURLOPT_HTTPGET, 1L);
    struct curl_slist* slist = add_headers(client, headers, length);
    char *response_string = NULL;
    curl_easy_setopt(client->api->inner, CURLOPT_WRITEFUNCTION, strwrite);
    curl_easy_setopt(client->api->inner, CURLOPT_WRITEDATA, &response_string);

    curl_easy_perform(client->api->inner);
    curl_slist_free_all(slist);
    free(url);
    return response_string;
}

char *api_post(st_client_t *client, char *route, char *data)
{
    char* url = make_url(route);
    curl_easy_setopt(client->api->inner, CURLOPT_URL, url);
    curl_easy_setopt(client->api->inner, CURLOPT_POSTFIELDS, data);
    char *header = "Content-Type: application/json";
    struct curl_slist* slist = add_headers(client, &header, 1);

    char *response_string = NULL;
    curl_easy_setopt(client->api->inner, CURLOPT_WRITEFUNCTION, strwrite);
    curl_easy_setopt(client->api->inner, CURLOPT_WRITEDATA, &response_string);

    curl_easy_perform(client->api->inner);
        curl_slist_free_all(slist);

    free(url);
    return response_string;
}

void cleanup(st_client_t *client)
{
    curl_easy_cleanup(client->api->inner);
    curl_global_cleanup();
    free(client->api);
    free(client);
}