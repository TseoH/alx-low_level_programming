#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*rev_string - printf rev_string
*
*Description: rev_string
*@s: String
*Return: void
*/
void print_rev(char *s)
{
	size_t i;

	if (strlen(s) == 0)
	{
		printf("%s", s);
		return;
	}
	for (i = 0; i < strlen(s); ++i)
	{
		printf("%c", *(s + strlen(s) - (i + 1)));
	}
}
