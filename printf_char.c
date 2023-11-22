#include "main.h"

/**
 * printf_chara - Function
 * @args: variable containing the character
 *
 * Return: returns the char
 */
int printf_chara(va_list args)
{
	char c;

	c = va_arg(args, int);
	(write(1, &args, 1));
	return (c);
}
