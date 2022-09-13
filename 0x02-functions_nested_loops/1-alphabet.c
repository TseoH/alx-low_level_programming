#include <stdio.h>
#include <string.h>

/**
* print_alphabet - is entry
*
* Description: Print alphabet with put-char
* Return: 0
*/
void print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz\n";
	size_t i = 0;

	for (i = 0; i < strlen(letters); i++)
	{
		putchar(letters[i]);
	}
}
