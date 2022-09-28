#include "main.h"

/**
*_pow_recursion - printf _pow_recursion
*
*Description: _pow_recursion print
*@x: Integer
*@y: Integer
*Return: Integer
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (0);
	}
	return (x * _pow_recursion(x, y - 1));
}
