#include "main.h"

/**
 * printdig - Handles conversion and print of integer and decimal nums
 * @num: number to be printed
 * Return: Nothing
*/

void printdig(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num >= 10)
	{
		printdig(num / 10);
	}

	_putchar('0' + (num % 10));
}
