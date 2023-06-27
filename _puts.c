#include "main.h"

/**
 * _puts - Prints a string to the stdout
 *@str: Accepts values to be printed
 * Return: Always 0.
 */

int _puts(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}

	return (count);
}
