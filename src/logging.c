#include "logging/logging.h"
#include <stdio.h>
#include <string.h>

void logging_log_message(const char* message, bool new_line)
{
    if (strlen(message) > 0)
    {
        printf(new_line ? "%s\n" : "%s", message);
        fflush(stdout);
    }
}
