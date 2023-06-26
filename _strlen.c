#include "main.h"

/**
 * _strlen - Returns the length of a string
 *@s: Accepts values
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}

	return (x);
}
