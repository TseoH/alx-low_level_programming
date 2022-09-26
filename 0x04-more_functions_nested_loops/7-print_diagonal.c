#include "main.h"
#include <stdio.h>

/**
*print_line - printf print_line
*
*Description: print_line print
*@n: Integer
*Return: Void
*/
void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i <= n; ++i)
	{
		for (k = 0; k < i + 1; ++k)
		{
			if (k > 0)
			{
				putchar(' ');
			}
		}
		putchar('\\');
		putchar('\n');
	}
}
