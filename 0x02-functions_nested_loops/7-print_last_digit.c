#include "main.h"

/**
* print_last_digit - print print_last_digit
*
* Description : print_last_digit printer
* @n: param
* Return: 1 if True
* Or 0 if False
*/
int print_last_digit(int n)
{	int x = n;
 	if (n >= 10)
	{
	x = (n % 10);
	}
	return (x);
}
