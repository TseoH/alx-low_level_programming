#include "main.h"

/**
 * print_to_98 - foo
 *
 * Description: print_to_98
 * @n: param
 * Return: 0
 */
int print_to_98(int n)
{
	if (n < 98)
	{
		int i = 0;

		while (i <= 98)
		{
			_putchar((n + i), '0');
			i++;

		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		int i = n;

		while (i >= 98)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	else
	{
		_putchar(98 + '0');
		_putchar('\n');
	}
}
