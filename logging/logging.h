#pragma once

#include <stdarg.h>

void logging_log_message(const char* message);
void logging_log_formatted(const char* format, ...);
void logging_log_with_ID(const char* module_id, const char* file, const char* function, const char* format, ...);

#define LOG(module_id, ...) logging_log_with_ID(module_id, __FILE__, __FUNCTION__, __VA_ARGS__)
