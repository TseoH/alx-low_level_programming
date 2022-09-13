#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_alphabet - is entry
*
* Description: Print alphabet with put-char
* Return: void
*/
void print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz\n";
	size_t i = 0;

	for (i = 0; i < strlen(letters); i++)
	{
		_putchar(letters[i]);
	}
}
