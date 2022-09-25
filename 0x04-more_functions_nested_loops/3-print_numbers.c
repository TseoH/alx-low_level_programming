#include "main.h"

/**
*print_numbers - printf print_numbers
*
*Description: print_numbers print
*Return: Void
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9 ; ++i)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
