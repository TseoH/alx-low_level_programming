#include "main.h"
#include <stdio.h>

/**
*_puts_recursion - printf _puts_recursion
*
*Description: _puts_recursion print
*@s: Char
*Return: Void
*/

void _puts_recursion(char *s)
{
	if(*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
