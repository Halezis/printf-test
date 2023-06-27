#ifndef MAIN_H
#define MAIN_H

/*header files*/
#include <stdlib.h>
#include <stdarg.h>

/*function prototypes*/
int _printf(const char *format, ...);
int print_helper(char specifier, va_list print_arg);
void print_dig(int num, int *count);
void print_binary(unsigned int arg, int *count);
int _putchar(char c);
int _puts(char *str);

#endif /*MAIN_H*/
