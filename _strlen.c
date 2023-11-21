#include "main.h"

/**
 * _strlen - the function to return the lenght of a string
 * Return: Returns the lenght of a string
 * @s: the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
