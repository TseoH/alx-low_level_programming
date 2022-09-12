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
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	size_t i = 0;

	for (i = 0; i < strlen(letters); ++i)
	{
		putchar(letters[i]);
	}
	
	putchar('\n');
	
	return (0);
}
