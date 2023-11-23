#include "main.h"

/**
 * print_char - Function
 * @args: variable containing the character
 *
 * Return: returns the char
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	(write(1, &args, 1));
	return (c);
}

/**
 * print_string - Prints strings followed by a newline
 * @args: A variable argument list of strings
 * Return: always returns 1 if success
 */
int print_string(va_list args)
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

/**
 * print_percent - Entry point
 * @arg: argument that stores the character
 * Return: percen
 */
int print_percent(va_list arg)
{
	char percen = '%';
	(void) arg;

	return (write(1, &percen, 1));
}
