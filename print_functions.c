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
	(write(1, &c, 1));
	return (1);
}

/**
 * print_string - Prints strings followed by a newline
 * @args: A variable argument list of strings
 * Return: always returns 1 if success
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char*);
    int total_len = 0;

    while (str != NULL)
    {
        total_len += _strlen(str);
        write(1, str, _strlen(str));
        str = va_arg(args, char*);
    }
    _putchar('\n');
    return total_len;
}


/**
 * print_percent - Entry point
 * @arg: argument that stores the character
 * Return: percen
 */
int print_percent(va_list arg)
{
	char percent = '%';
	(void) arg;

	return (write(1, &percent, 1));
}
