#pragma once

#include <stdarg.h>

void logging_log_message(const char* message);
void logging_log_formatted(const char* format, ...);
void logging_log_message_with_module(const char* module_id, const char* message);
void logging_log_formatted_with_module(const char* module_id, const char* format, ...);
