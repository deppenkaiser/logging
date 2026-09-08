#pragma once

#include <stdarg.h>

void logging_log_message(const char* message);
void logging_log_formatted(const char* format, ...);