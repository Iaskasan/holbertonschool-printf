#include "main.h"

/**
 * print_string - Prints strings followed by a newline
 * @args: A variable argument list of strings
 * Return: always returns 1 if success
 */
int print_string(va_list args)
{
	char *str;
	int total_len = 0;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		return (write(1, &str, 1));
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;

		total_len++;
	}
	_putchar('\n');

	return (total_len);
}

