#include "main.h"

/**
 * format_handler - Handles format specifiers
 * and calls the corresponding function.
 * @format: The format specifier character.
 * @args: The va_list of arguments.
 */

void format_handler(const char format, va_list args)
{
	int i = 0;

	handler arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};
	while (arr[i].format != '\0')
	{
		if (arr[i].format == format)
		{
			arr[i].f(args);
			return;
		}
	i++;
	}
	write(1, "error", 5);
}
