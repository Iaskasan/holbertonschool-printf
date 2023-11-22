#ifndef MAIN_H
#define MAIN_H


#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int print_chara(char args);
int _putchar(const char c);
int print_percentage(va_list arg);

#endif
