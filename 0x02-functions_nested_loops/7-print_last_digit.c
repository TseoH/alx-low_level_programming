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
{
	return (n * ((n > 0) - (n < 0)));
}
