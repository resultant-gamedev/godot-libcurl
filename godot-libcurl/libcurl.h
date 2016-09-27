/* 
libcurl.h 
Custom data type: CURL
*/

#ifdef LIBCURL_H
#define LIBCURL_H


#include "reference.h"

class Libcurl : public Reference {
   OBJ_TYPE(Libcurl,Reference);
   
   CURL *curl = curl_easy_init();

protected:
   static void _bind_methods();

public:
   /*
   #############################
          Easy interface
   #############################
   */
   void easy_cleanup(CURL handle);
   CURL easy_duphandle();
   char easy_escape(CURL curl, auto data, int length);
   void easy_getinfo();
   void easy_init();
   void easy_pause(CURL handle, int bitmask);
   void easy_perform();
   void easy_recv();
   void easy_reset();
   void easy_send();
   void easy_setopt();
   void easy_sterror();
   void easy_unescape();
/*
################################
     End of easy interface
################################
*/


   Libcurl();

};

#endif
