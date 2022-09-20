#include "main.h"

/**
*swap_int - printf swap_int
*
*Description: swap_int
*@b: secund
*@a: first
*Return: void
*/
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}
