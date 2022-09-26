#include "main.h"
#include <stdio.h>

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
		putchar('\n');
		return;
	}
	for (i = 0; i <= n; ++i)
	{
		putchar('_');
	}
	putchar('\n');
}
