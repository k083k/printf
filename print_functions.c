#include "main.h"

/**
 * check_func - check which function to call
 * @s: char
 * @ap: argument of type va_list
 * Return: integer
 */

int check_func(const char s, va_list ap)
{
	int i = 0, count = 0;
	printf_t ch[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_perc},
		{'d', print_integer},
		{'i', print_integer},
		{'b', print_bin}
	};
	while (ch[i].c != 0)
	{
		if (ch[i].c == s)
		{
			count = count + ch[i].fun(ap);
			return (count);
		}
		i++;
	}
	return (0);
}
