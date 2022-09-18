#include <stdio.h>

/**
* main - entry
*
* Description: main
* Return: 0
*/
int main(void)
{
	int i, y;

	for (i = 0; i <= 98; i++)
	{
		for (y = i + 1; y <= 99; y++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (i == 98 && y == 99)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
