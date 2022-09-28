#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*_print_rev_recursion - printf _print_rev_recursion
*
*Description: _print_rev_recursion print
*@s: Char
*Return: Void
*/

void _print_rev_recursion(char *s)
{
	if (!*s)
		return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}
