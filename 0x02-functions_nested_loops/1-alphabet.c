#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_alphabet - is entry
*
* Description: Print alphabet with put-char
* Return: void
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
