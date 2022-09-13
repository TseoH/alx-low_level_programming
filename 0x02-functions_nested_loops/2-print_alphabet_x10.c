#include "main.h"
/**
* print_alphabet_x10 - print alphabet
*
* Description : print_alphabet_x10
* Return: void
*/
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int k;

		for (k = 'a'; k <= 'z' ; ++k)
		{
			_putchar(k);
		}
		_putchar('\n');
		i++;
	}
}
