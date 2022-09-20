#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*puts2 - printf puts2
*
*Description: puts2
*@s: String
*Return: void
*/
void puts_half(char *str)
{
	size_t i, corretLenth;

	if (strlen(str) == 0)
	{
		printf("\n");
	}
	else
	{
		if (strlen(str) % 2 == 0)
		{
			corretLenth = strlen(str);
		}
		else
		{
			corretLenth = strlen(str) - 1;
		}
		for (i = 0; i < corretLenth; ++i)
		{
			if (i >= corretLenth / 2)
			{
				printf("%c", *(str + i));
			}
			if (i == corretLenth - 1)
			{
				printf("\n");
			}
		}
	}
}
