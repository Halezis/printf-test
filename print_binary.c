#include "main.h"

/**
 * print_binary - Helper function to process and print binary conversion
 * @arg: The unsigned int argument to convert and print
 * @count: Pointer to the count of printed characters
 */

void print_binary(unsigned int arg, int *count)
{
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
	int started = 0;

	if (arg == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}

	while (mask > 0)
	{
		if (arg & mask)
		{
			_putchar('1');
			(*count)++;
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
			(*count)++;
		}

		mask >>= 1;
	}
}
