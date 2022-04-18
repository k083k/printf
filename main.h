#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct printf - structure for printf
 * @c: character
 * @fun: function
 */

typedef struct printf
{
	char c;
	int (*fun)(va_list);
} printf_t;

/* function prototypes */

int _printf(const char *format, ...);
int _putchar(char c);

int print_char(va_list arg);
int print_str(va_list arg);
int print_perc(va_list arg);
int print_integer(va_list arg);
int check_func(const char s, va_list ap);
int print_rev_str(va_list arg);
int print_bin(va_list arg);

#endif
