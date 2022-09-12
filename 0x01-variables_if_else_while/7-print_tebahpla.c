#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * Description: Putchar
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i > ('a' - 1); i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
