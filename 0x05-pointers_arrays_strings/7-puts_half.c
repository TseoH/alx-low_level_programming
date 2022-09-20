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
void puts2(char *s)
{
	size_t i, corretLenth;

	if (strlen(s) == 0)
	{
		printf("\n");
	}
	else
	{
		if (strlen(s) % 2 == 0)
		{
			corretLenth = strlen(s);
		}
		else
		{
			corretLenth = strlen(s) - 1;
		}
		for (i = 0; i < corretLenth; ++i)
		{
			if (i >= corretLenth / 2)
			{
				printf("%c", *(s + i));
			}
			if (i == corretLenth - 1)
			{
				printf("\n");
			}
		}
	}
}
