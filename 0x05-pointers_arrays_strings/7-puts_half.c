#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*puts_half - printf puts_half
*
*Description: puts_half
*@str: String
*Return: void
*/
void puts_half(char *str)
{
	size_t i, corretLenth;

	if (strlen(str) % 2 == 0)
	{
		corretLenth = strlen(str) / 2;
	}
	else
	{
		corretLenth = (strlen(str) + 1) / 2;
	}
	for (i = corretLenth; i < strlen(str); ++i)
	{
		printf("%c", *(str + i));
	}
	printf("\n");
}
