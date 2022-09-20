#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*print_rev - printf print_rev
*
*Description: print_rev
*@s: String
*Return: void
*/
void print_rev(char *s)
{
	size_t i;

	if (strlen(s) == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < strlen(s); ++i)
	{
		printf("%c", *(s + strlen(s) - (i + 1)));
		if (i == strlen(s) - 1)
		{
			printf("\n");
		}
	}
}
