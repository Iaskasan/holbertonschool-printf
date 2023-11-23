#include "main.h"

/**
 * _printf - 
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;

	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len += format_handler(format[i + 1], args);
			i += 2;
		}
		else
		{
			len += _putchar(format[i]);
			i++;
		}
	}

	va_end(args);

	return (len);
}
