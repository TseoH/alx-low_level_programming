#include "main.h"

/**
*_strlen_recursion - printf _strlen_recursion
*
*Description: _strlen_recursion print
*@s: Char
*Return: Void
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == 0)
	{
		return (0);
	}
	i = _strlen_recursion(s + 1);
	return (i + 1);
}
