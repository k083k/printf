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

/**
 * print_str - print a string
 * @arg: argument of type va_list
 * Return: len
 */

int print_str(va_list arg)
{
	int len = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}

/**
 * print_perc - print percent sign
 * @arg: argument of time va_list
 * Return: integer
 */

int print_perc(va_list arg)
{
	(void)arg;

	_putchar('%');
	return (1);
}
