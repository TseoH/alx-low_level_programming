#include "main.h"

/**
*reverse_array - print reverse_array
*
*Description: print reverse_array
*@a: List<int>
*@n: Length
*Return: Void
*/
void reverse_array(int *a, int n)
{
	int old[n];

	for (int i = 0; i < n; ++i)
	{
		old[i] = a[n- (i+1)];
	}
	for (int i = 0; i < n; ++i)
	{
		a[i] = old[i];
	}
}
