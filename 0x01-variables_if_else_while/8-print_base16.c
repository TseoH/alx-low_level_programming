#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * Description: Main
 * Return: 0
 */
int main(void)
{
	char i;
	char y;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	
	for (y = 'a'; y < 'g'; y++)
	       putchar(y);
	putchar('\n');
	return (0);	
}
