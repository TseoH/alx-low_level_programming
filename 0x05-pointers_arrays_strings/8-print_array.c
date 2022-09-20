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
	int i;
	for(i = 0; i < n; i++){
		if (i == n - 1)
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
}
