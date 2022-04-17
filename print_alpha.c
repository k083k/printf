#include "main.h"

/**
 * print_char - print a character
 * @arg: argument of type va_list
 * Return: always 1
 */

int print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	_putchar(ch);
	return (1);
}

