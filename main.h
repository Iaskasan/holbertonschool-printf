#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(const char c);
=======
<<<<<<< HEAD
>>>>>>> 42e0552617d92ff7a85c4cf80128c891f2898886
int _printf(const char *format, ...);
int _strlen(char *s);
int print_character(va_list arguments);
int print_string(va_list arguments);
int print_percentage(va_list arguments);
int print_number(va_list arguments);


typedef struct format_handler
{
	char format;
	int (*f)(va_list);
} handler;

=======

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int print_char(char args);
int _putchar(const char c);
int print_percent(va_list arg);

>>>>>>> printf_int
#endif
