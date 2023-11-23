#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
int _printf(const char *format, ...);


#include <stdlib.h>
=======
>>>>>>> 8d8fc25c943152ecadc94e7980ef74a3c8dba1e0
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(const char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int print_character(va_list arguments);
int print_string(va_list arguments);
int print_percentage(va_list arguments);
int print_number(va_list arguments);


<<<<<<< HEAD
=======
typedef struct format_handler
{
	char format;
	int (*f)(va_list);
} handler;

>>>>>>> 8d8fc25c943152ecadc94e7980ef74a3c8dba1e0
#endif
