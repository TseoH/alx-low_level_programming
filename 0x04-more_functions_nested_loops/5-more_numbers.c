#include "main.h"
#include <stdio.h>

/**
*print_most_numbers - printf print_most_numbers
*
*Description: print_most_numbers print
*Return: Void
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			if (j >= 10)
			{
				putchar('1');
			}
			putchar(j % 10 + '0');
		}
		putchar('\n');
	}
}
