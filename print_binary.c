#include "main.h"

/**
 * print_binary - Helper function to process and print binary conversion
 * @arg: The unsigned int argument to convert and print
 * @count: Pointer to the count of printed characters
 */

void print_binary(unsigned int arg, int *count)
{
	unsigned int extract;
	int printed = 0;

	extract = 1 << (sizeof(unsigned int) * 8 - 1);
	if (arg == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}

	while (extract > 0)
	{
		if (arg & extract)
		{
			_putchar('1');
			(*count)++;
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
			(*count)++;
		}

		extract >>= 1;
	}
}
