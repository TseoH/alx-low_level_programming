#include "main.h"

/**
* print_sign - print print_sign
*
* Description : print_sign printer
* @n: param
* Return: 1 if True
* Or 0 if False
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
