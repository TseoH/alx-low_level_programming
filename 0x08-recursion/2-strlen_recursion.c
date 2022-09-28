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
	if (*s)
	{
		i++;
		_strlen_recursion(s + i);
		return (i);
	}
	else
	{
		return (i);
	}
}
