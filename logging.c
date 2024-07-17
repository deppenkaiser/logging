#include "logging.h"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdint.h>

void logging_log_message(const char* message)
{
    if (strlen(message) > 0)
    {
        static long first_time_ns = 0.0;
        clockid_t clockid = 0;
        struct timespec ts = {0};
        clock_gettime(0, &ts);
        int64_t time_ns = ts.tv_sec * 1.0e9 + ts.tv_nsec;

        first_time_ns = first_time_ns == 0.0 ? time_ns : first_time_ns;

        int64_t diff_ns = time_ns - first_time_ns;
        printf("[%020ld]: %s\n", diff_ns, message);

        fflush(stdout);
    }
}
