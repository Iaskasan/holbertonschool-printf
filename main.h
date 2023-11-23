#ifndef MAIN_H
#define MAIN_H


#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/**
 * struct specifier_handler - struct for specifier handler
 * @format: specifier to be checked
 * @f: pointer to specifier handler
*/
typedef struct specifier_handler
{
    char format;
    int (*f)(va_list args);
} handler;

int print_char(va_list args);
int _putchar(const char c);
int print_percent(va_list arg);
int format_handler(const char format, va_list args);
int print_string(va_list args);
int _strlen(char *s);

#endif
