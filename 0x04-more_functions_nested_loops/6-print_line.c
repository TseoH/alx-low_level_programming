#include "main.h"

/**
*print_line - printf print_line
*
*Description: print_line print
*@n: Integer
*Return: Void
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i <= n; ++i)
	{
		_putchar('_');
	}
	_putchar('\n');
}
