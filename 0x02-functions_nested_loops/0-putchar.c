#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * main - putchar
 *
 * Description: printer
 * Return: input
 */
int main(void)
{
	char str[] = "_putchar";
	size_t i = 0;

	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
