#ifndef MAIN_H
#define MAIN_H

/*header files*/
#include <stdlib.h>
#include <stdarg.h>

/*function prototypes*/
int _printf(const char *format, ...);
void print_helper(char specifier, va_list print_arg);
void printdig(int num);
int _putchar(char c);
void _puts(char *str);
int _strlen(const char *s);

#endif /*MAIN_H*/
