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
   void easy_cleanup(CURL * handle );
   CURL *easy_duphandle(CURL *handle );
   char *easy_escape( CURL * curl , const char * string , int length ); 
   void easy_getinfo();
   CURL *easy_init( );
   void easy_pause(CURL handle, int bitmask);
   CURLcode easy_perform(CURL *handle);
   CURLcode easy_recv(CURL *curl, void *buffer, size_t buflen, size_t *n);
   void easy_reset(CURL *handle );
   CURLcode easy_send( CURL * curl , const void * buffer , size_t buflen , size_t * n );
   CURLcode easy_setopt(CURL *handle, CURLoption option, parameter); 
   const char *easy_strerror(CURLcode errornum);\
   char *easy_unescape( CURL * curl , const char * url , int inlength , int * outlength ); 

/*
################################
     End of easy interface
################################
*/

   void formfree(struct curl_httppost * form);
   int formget(struct curl_httppost * form, void *userp, curl_formget_callback append );
   void free( char * ptr );
   time_t getdate(char * datestring , time_t *now );
   void global_cleanup(void);
   CURLcode curl_global_init(long flags);
   CURLcode curl_global_init_mem(long  flags,
                                 curl_malloc_callback m,
                                 curl_free_callback f,
                                 curl_realloc_callback r,
                                 curl_strdup_callback s,
                                 curl_calloc_callback c );
   CURLMcode multi_add_handle(CURLM *multi_handle, CURL *easy_handle);
   CURLMcode multi_assign(CURLM *multi_handle, curl_socket_t sockfd, void *sockptr);  
   CURLMcode multi_cleanup( CURLM *multi_handle );
   CURLMcode multi_fdset(CURLM *multi_handle,
                         fd_set *read_fd_set,
                         fd_set *write_fd_set,
                         fd_set *exc_fd_set,
                         int *max_fd);
   CURLMsg *multi_info_read( CURLM *multi_handle, int *msgs_in_queue); 
   CURLM *multi_init();
   CURLMcode multi_perform(CURLM *multi_handle, int *running_handles); 
   CURLMcode multi_remove_handle(CURLM *multi_handle, CURL *easy_handle);
   CURLMcode multi_setopt(CURLM * multi_handle, CURLMoption option, param); 
   CURLMcode multi_socket_action(CURLM * multi_handle,
                                 curl_socket_t sockfd,
                                 int ev_bitmask,
                                 int *running_handles);
   const char *multi_strerror(CURLMcode  errornum);
   CURLMcode multi_timeout(CURLM *multi_handle, long *timeout);
   CURLMcode multi_wait(CURLM *multi_handle,
                        struct curl_waitfd extra_fds[],
                        unsigned int extra_nfds,
                        int timeout_ms,
                        int *numfds);
   CURLSHcode share_cleanup(CURLSH * share_handle);
   CURLSH *share_init();
   CURLSHcode share_setopt(CURLSH *share, CURLSHoption option, parameter); 
   const char *share_strerror(CURLSHcode  errornum);
   struct slist *slist_append(struct curl_slist * list, const char * string);
   void slist_free_all(struct curl_slist * list);
   char *version();
   curl_version_info_data *version_info(CURLversion type);

   Libcurl();
};

#endif
