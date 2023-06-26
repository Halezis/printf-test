#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _printf - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: The number of characters printed
*/

int _printf(const char *format, ...)
{
	int x, len;
	char spec;
	va_list print_arg;

	x = 0, len = 0;
	if (format == NULL)
		return (-1);
	va_start(print_arg, format);
	while (format[x] && format[x] != '\0')
	{
		if (format[x] == '%')
		{
			x++;
			spec = format[x];
			if (spec == 'c' || spec == 's' || spec == '%' || spec == 'i' || spec == 'd')
			{
				print_helper(spec, print_arg);
			}
		}
		else
		{
			_putchar(format[x]);
		}
		len++;
		x++;
	}
	va_end(print_arg);
	return (len);
}
