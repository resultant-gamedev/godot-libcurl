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

void Libcurl::easy_perform() {

}

void Libcurl::easy_recv() {

}

void Libcurl::easy_reset() {

}

void Libcurl::easy_send() {

}

void Libcurl::easy_setopt() {

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

}
