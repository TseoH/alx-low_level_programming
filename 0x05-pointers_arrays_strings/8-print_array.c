#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*print_array - printf print_array
*
*Description: print_array
*@a: array
*@n: n array
*Return: void
*/
void print_array(int *a, int n)
{
	int i, new_n;
	if (n == 0)
		return;
	if (n<0)
		new_n = n * (-1);
	else
		new_n = n;
	for (i = 0; i < new_n; i++)
	{
		if (i == new_n - 1)
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
}
