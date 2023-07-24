#include "logging/logging.h"
#include <stdio.h>

void logging_log_message(const char* message, bool new_line)
{
    printf(new_line ? "%s\n" : "%s", message);
    fflush(stdout);
}
