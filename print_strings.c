#include "main.h"

/**
 * print_strings - prints strings
 * @n: the number of parameters
 */
void print_strings(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;
	int strlen;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(args, char*);
		strlen = _strlen(str);
		if (str == NULL)
		{
			write(1, "(nil)", strlen);
			continue;
		}
		write(1, str, strlen);
	}
	_putchar('\n');
	va_end(args);
}
