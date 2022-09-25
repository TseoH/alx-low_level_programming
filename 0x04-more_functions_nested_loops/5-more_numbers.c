#include "main.h"

/**
* print_most_numbers - printf print_most_numbers
*
* Description: print_most_numbers print
* Return : Void
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
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
