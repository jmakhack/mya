#ifndef MYA_H
#define MYA_H
#include <curl/curl.h>
#include <json-c/json.h>

typedef struct curl_fetch_st curl_fetch_st;

void validate_username (char *username);
size_t curl_callback (void *contents, size_t size, size_t nmemb, void *userp);
CURLcode curl_fetch_url (CURL *curl, const char *url, struct curl_fetch_st *fetch);
void generate_endpoint (char *endpoint, size_t mode);
void generate_anime_api_uri (char *uri, char *username, char *endpoint);
void generate_paginated_uri (char *paginated_uri, char *base_uri, size_t page);
void fetch_curl_payload (struct curl_fetch_st *curl_fetch, char *paginated_uri);
size_t print_anime_list (struct json_object *anime_list, size_t page, char *list_name);

#endif /* MYA_H */
