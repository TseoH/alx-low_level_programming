#include "main.h"

/**
 * print_to_98 - foo
 *
 * Description: print_to_98
 * @n: param
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i = 0;

		while (i <= 98)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				if (i < 98) {
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((i) + '0');
				_putchar(',');
				_putchar(' ');
			}
			i++;

		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		int i = n;

		while (i > 98)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				if (i < 98) {
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((i) + '0');
				_putchar(',');
				_putchar(' ');
			}
			i--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar(98 + '0');
	}
}
