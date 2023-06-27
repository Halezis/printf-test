#include "main.h"

/**
 * printdig - Handles conversion and print of integer and decimal nums
 * @num: number to be printed
 * @count: number of characters printed
 * Return: Nothing
*/

void print_dig(int num, int *count)
{
	int x, temp, digits, digit, divisor;

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

	temp = num;
	digits = 0;

	while (temp != 0)
	{
		temp /= 10;
		digits++;
	}

	divisor = 1;
	for (x = 1; x < digits; x++)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar('0' + digit);
		(*count)++;
		num %= divisor;
		divisor /= 10;
	}
}
