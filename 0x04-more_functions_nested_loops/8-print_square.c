#include "main.h"

/**
* print_square - printf print_square
*
* Description: print_square print
* @size: Integer
* Return : Void
*/
void print_square(int size)
{
	int i, j;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i <= size; ++i) {
		for (j = 0; j <= size; ++j) {
			_putchar('#');
		}
		_putchar('\n');
	}
}
