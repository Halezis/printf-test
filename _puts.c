#include "main.h"

/**
 * _puts - Prints a string to the stdout
 *@str: Accepts values to be printed
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}