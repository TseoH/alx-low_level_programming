#include <stdio.h>
#include <string.h>

/**
 * main - entry
 *
 * Description: Alphbet
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	return (0);
}
