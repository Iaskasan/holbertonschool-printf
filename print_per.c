#include "main.h"

/**
 * print_percentage - Entry point
 * @arg: argumento
 * Return: percen
 */
int print_percent(va_list arg)
{
	char percen = '%';
	(void) arg;

	return (write(1, &percen, 1));
}
