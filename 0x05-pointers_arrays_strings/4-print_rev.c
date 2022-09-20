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
	for (int i = 0; i < strlen(s); ++i)
	{
		printf("%c", *(s + strlen(s) - (i + 1)));
	}
}
