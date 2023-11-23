#include "main.h"

/**
 * _putchar - a simpme function to pritn a char on the standard output
 * @c: the char to be printed
 *
 * Return: returns the char
 */

int _putchar(const char c)
{
	return (write(1, &c, 1));
}
