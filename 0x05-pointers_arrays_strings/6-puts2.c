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
	size_t i;

	if (strlen(s) == 0)
	{
		printf("%s", s);
	}
	else
	{
		for (i = 0; i < strlen(s); ++i)
		{
			if(i % 2 == 0)
			{
				printf("%c", *(s + i));
			}
		}
	}
}
//
// Created by MacBooK Pro on 20/09/2022.
//
