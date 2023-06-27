#include "main.h"

/**
 * printdig - Handles conversion and print of integer and decimal nums
 * @num: number to be printed
 * @count: number of characters printed
 * Return: Nothing
*/

int printdig(int num)
{
	int count;

	count = 0;
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	else if (num == 0)
	{
		_putchar('0');
		count++;
	}

	if (num >= 10)
	{
		count++;
		printdig(num / 10);
	}

	_putchar('0' + (num % 10));
	return (count);
}
