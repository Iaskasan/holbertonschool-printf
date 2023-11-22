#include "main.h"

/**
 * print_strings - Prints strings followed by a newline
 * @args: A variable argument list of strings
 * Return: always returns 1 if success
 */
int print_strings(va_list args)
{
	char *str;
	int strlen;

	while (va_arg(args, char*) != NULL)
	{
		str = va_arg(args, char*);
		strlen = _strlen(str);
		if (str == NULL)
		{
			break;
		}
		write(1, str, strlen);
	}
	_putchar('\n');
	va_end(args);
	return (1);
}
