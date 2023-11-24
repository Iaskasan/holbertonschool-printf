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

    if (str == NULL)
    {
        str = "(null)";
    }
    total_len = _strlen(str);
    write(1, str, total_len);

    return (total_len);
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

/**
 * print_number - print an int to the standard output
 *
 * @arguments: a va_list containing the integer to be printed
 *
 * Return: the number of characters printed
 */
int print_number(va_list arguments)
{
	long int number = va_arg(arguments, int);

	long int absolute_number = 0;
	long int temp_number = absolute_number;
	long int digit_position = 1;

	int lenght = 0;

	if (number < 0)
	{
		absolute_number = (number * -1);
		_putchar('-');

		lenght++;
	}
	else
	{
		absolute_number = number;
	}

	temp_number = absolute_number;

	while (temp_number > 9)
	{
		temp_number = temp_number / 10;
		digit_position = digit_position * 10;
	}

	while (digit_position >= 1)
	{
		_putchar(((absolute_number / digit_position) % 10) + '0');
		digit_position = digit_position / 10;

		lenght++;
	}

	return (lenght);
}