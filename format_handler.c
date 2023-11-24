#include "main.h"

/**
 * format_handler - Handles format specifiers
 * and calls the corresponding function.
 * @format: The format specifier character.
 * @args: The va_list of arguments.
 * Return: size
 */

int format_handler(const char format, va_list args)
{
	int i = 0;

	handler arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	for (i = 0; arr[i].format != '\0'; i++)
	{
		if (arr[i].format == format)
		{
			return (arr[i].f(args));
		}
	}
	write(1, &format, 1);
	return (1);
}
