#include "main.h"
/**
 * print_integer - print number
 * @arg: argument of type va_list
 * Return: count
 */

int print_integer(va_list arg)
{
	int count = 0, rest = 1;
	unsigned int x;
	int n = va_arg(arg, int);

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
		count++;
	}
	while ((x / rest) > 9)
	{
		rest = rest * 10;
	}
	while (rest > 0)
	{
		_putchar(x / rest + '0');
		x = (x % rest);
		rest = rest / 10;
		count++;
	}
	return (count);
}

/**
 * print_bin - print binary
 * @arg: argument of type va_list
 * Return: count
 */

int print_bin(va_list arg)
{
	unsigned int x, y, i, sum;
	unsigned int a[32];
	int count;

	x = va_arg(arg, unsigned int);
	y = 2147483648;
	a[0] = x / y;
	for (i = 1; i < 32; i++)
	{
		y = y / 2;
		a[i] = (x / y) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum = sum + a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
