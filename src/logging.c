#include "logging/logging.h"
#include <stdio.h>

void log_message(const char* pmessage, bool new_line)
{
    printf(new_line ? "%s\n" : "%s", pmessage);
    fflush(stdout);
}
