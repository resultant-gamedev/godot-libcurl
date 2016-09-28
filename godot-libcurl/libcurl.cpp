/* libcurl.cpp */

#include "libcurl.h"

/*
##################################
    Start of easy interface
##################################
*/

CURL Libcurl::easy_init() {
   CURL *curl = curl_easy_init();
   return curl;
}

void Libcurl::easy_cleanup(handle) {
   curl_easy_cleanup(handle)
}

CURL Libcurl::easy_duphandle(handle) {
   char *output = curl_easy_duphandle(handle);
   return (handle);   
}

char Libcurl::easy_escape(curl, data, length) {
   char *output = curl_easy_escape(curl , data, length); 
   return (output);
}

void Libcurl::easy_getinfo() {
//Lots and lots and lots of stuff. Break it up in chunks?
}

CURLcode Libcurl::easy_pause(handle, bitmask) {
   libcurl_easy_pause(handle, bitmask);
   
}

void Libcurl::easy_perform(handle) {

}

CURLcode Libcurl::easy_recv(curl, buffer, buflen, n) {

}

void Libcurl::easy_reset() {

}

void Libcurl::easy_send() {

}

CURLcode Libcurl::easy_setopt(handle, option, parameter) {

}

void Libcurl::easy_sterror() {

}

void Libcurl::easy_unescape() {

}

/* 
#######################################
       End of easy interface
#######################################
*/


void Libcurl::formadd() {

}

void Libcurl::formfree() {

}

void Libcurl::formget() {

}

void Libcurl::free() {

}

void Libcurl::getdate() {

}

/*
#################################
     Multi interface
#################################
*/

void Libcurl::multi_add_handle() {

}

void Libcurl::multi_assign() {

}

void Libcurl::multi_cleanup() {

}

void Libcurl::multi_fdset() {

}


void Libcurl::multi_info_read() {

}

void Libcurl::multi_init() {

}

void Libcurl::multi_perform() {

}

void Libcurl::multi_remove_handle() {

}

void Libcurl::multi_setopt() {

}

void Libcurl::multi_socket_action() {

}

void Libcurl::multi_sterror() {

}

void Libcurl::multi_slist_append() {

}

void Libcurl::multi_slist_free_all() {

}

void Libcurl::version() {

}

void Libcurl::version_info() {

}

/*
##################################
            Bindings
##################################
*/

void Libcurl::_bind_methods() {
   ObjectTypeDB::bind_method("easy_init",&:Libcurl::easy_init);
   ObjectTypeDB::bind_method("easy_cleanup",&:Libcurl::easy_cleanup);
   ObjectTypeDB::bind_method("easy_duphandle",&:Libcurl::easy_duphandle);
   ObjectTypeDB::bind_method("easy_escape",&:Libcurl::easy_escape);
   ObjectTypeDB::bind_method("easy_getinfo",&:Libcurl::easy_getinfo);
   ObjectTypeDB::bind_method("easy_pause",&:Libcurl::easy_pause);
   ObjectTypeDB::bind_method("easy_perform",&:Libcurl::easy_perform);
   ObjectTypeDB::bind_method("easy_recv",&:Libcurl::easy_recv);
   ObjectTypeDB::bind_method("easy_reset",&:Libcurl::easy_reset);
   ObjectTypeDB::bind_method("easy_send",&:Libcurl::easy_send);
   ObjectTypeDB::bind_method("easy_setopt",&:Libcurl::easy_setopt);
   ObjectTypeDB::bind_method("easy_sterror",&:Libcurl::easy_sterror);
   ObjectTypeDB::bind_method("easy_unescape",&:Libcurl::easy_unescape);

   ObjectTypeDB::bind_method("formadd",&:Libcurl::formadd);
   ObjectTypeDB::bind_method("formfree",&:Libcurl::formfree);
   ObjectTypeDB::bind_method("formget",&:Libcurl::formget);
   ObjectTypeDB::bind_method("free",&:Libcurl::free);
   ObjectTypeDB::bind_method("getdate",&:Libcurl::getdate);

   ObjectTypeDB::bind_method("multi_add_handle",&:Libcurl::multi_add_handle);
   ObjectTypeDB::bind_method("multi_assign",&:Libcurl::multi_assign);
   ObjectTypeDB::bind_method("multi_cleanup",&:Libcurl::multi_cleanup);
   ObjectTypeDB::bind_method("multi_fdset",&:Libcurl::multi_fdset);
   ObjectTypeDB::bind_method("multi_info_read",&:Libcurl::multi_info_read);
   ObjectTypeDB::bind_method("multi_init",&:Libcurl::multi_init);
   ObjectTypeDB::bind_method("multi_perform",&:Libcurl::multi_perform);
   ObjectTypeDB::bind_method("multi_remove_handle",&:Libcurl::multi_remove_handle);
   ObjectTypeDB::bind_method("multi_setopt",&:Libcurl::multi_setopt);
   ObjectTypeDB::bind_method("multi_socket_action",&:Libcurl::multi_socket_action);
   ObjectTypeDB::bind_method("multi_sterror",&:Libcurl::multi_sterror);
   ObjectTypeDB::bind_method("multi_slist_append",&:Libcurl::multi_slist_append);
   ObjectTypeDB::bind_method("multi_slist_free_all",&:Libcurl::multi_slist_free_all);
   ObjectTypeDB::bind_method("version",&:Libcurl::version);
   ObjectTypeDB::bind_method("version_info",&:Libcurl::multi_version_info);
}
