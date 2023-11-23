#ifndef MAIN_H
#define MAIN_H


#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int print_char(char args);
int _putchar(const char c);
int print_percent(va_list arg);

#endif
