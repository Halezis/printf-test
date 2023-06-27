#include "main.h"

/**
 * printdig - Handles conversion and print of integer and decimal nums
 * @num: number to be printed
 * @count: number of characters printed
 * Return: Nothing
*/

void printdig(int num, int *count)
{
	if (num < 0)
	{
		_putchar('-');
		(*count)++;
		num = -num;
	}
	else if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}

	if (num >= 10)
	{
		printdig(num / 10, count);
	}

	_putchar('0' + (num % 10));
	(*count)++;
}
