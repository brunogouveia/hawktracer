#ifndef HAWKTRACER_LISTENERS_FILE_DUMP_LISTENER_H
#define HAWKTRACER_LISTENERS_FILE_DUMP_LISTENER_H

#include <hawktracer/listener_buffer.h>

#include <stdio.h>

HT_DECLS_BEGIN

typedef struct
{
    HT_ListenerBuffer buffer;
    FILE* p_file;
    struct _HT_Mutex* mtx;
} HT_FileDumpListener;

HT_API HT_ErrorCode ht_file_dump_listener_init(HT_FileDumpListener* listener, const char* filename, size_t buffer_size);

HT_API void ht_file_dump_listener_deinit(HT_FileDumpListener* listener);

HT_API void ht_file_dump_listener_callback(TEventPtr events, size_t size, HT_Boolean serialized, void* user_data);

HT_DECLS_END

#endif /* HAWKTRACER_LISTENERS_FILE_DUMP_LISTENER_H */
