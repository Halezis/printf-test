#include "main.h"

/**
 * print_helper - A helper function to print args depending on format
 * @specifier: format specifer of the arg to print
 * @print_arg: macro to return the next argument of the _printf fxn
*/
void print_helper(char specifier, va_list print_arg)
{
	int arg;
	char *str;

	switch (specifier)
			{
			case 'c':
				arg = va_arg(print_arg, int);
				_putchar(arg);
				break;
			case 's':
				str = va_arg(print_arg, char *);
				if (str == NULL)
					str = "(null)";
				_puts(str);
				break;
			case '%':
				_putchar('%');
				break;
			case 'i':
			case 'd':
				arg = va_arg(print_arg, int);
				printdig(arg);
				break;
			}
}
