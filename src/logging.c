#include "logging/logging.h"
#include <stdio.h>

void logMessage(const char* pMessage, bool bNewLine)
{
    printf(bNewLine ? "%s\n" : "%s", pMessage);
    fflush(stdout);
}
