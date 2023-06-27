#include <unistd.h>

/**
  *_putchar - A putchar function
  *@c: the character to print
  *Return: printed character
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
