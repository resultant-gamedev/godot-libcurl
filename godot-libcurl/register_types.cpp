#include "register_types.h"
#include "libcurl.h"

void register_Libcurl_types() {

    ObjectTypeDB::register_type<CURL>();
    ObjectTypeDB::register_type<CURLcode>();
    ObjectTypeDB::register_type<CURLoption>();
    ObjectTypeDB::register_type<CURLM>();
    ObjectTypeDB::register_type<CURLMcode>();
    ObjectTypeDB::register_type<CURLMoption>();
    ObjectTypeDB::register_type<CURLSH>();
    ObjectTypeDB::register_type<CURLSHcode>();
    ObjectTypeDB::register_type<CURLSHoption>();
    ObjectTypeDB::register_type<CURLversion>();


}

void unregister_Libcurl_types() {
}
