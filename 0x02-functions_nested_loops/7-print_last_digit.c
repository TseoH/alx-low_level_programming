#include "main.h"

/**
* print_x - print print_x
*
* Description : print_x printer
* @n: param
* Return: 1 if True
* Or 0 if False
*/
int print_x(int n)
{	int x = n;

	x = (n % 10);
	if (x < 0)
	x = x * -1;
	return (x);
}
