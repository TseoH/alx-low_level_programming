#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry
 *
 * Description: alaph
 * Return: 0
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	size_t i = 0;
	for (i = 0; i < strlen(letters); ++i)
	{
		putchar(letters[i]);
	}
	return (0);
}
