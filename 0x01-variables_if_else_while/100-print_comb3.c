#include <stdio.h>

/**
* main - entry
*
* Description: main
* Return: 0
*/
int main(void)
{
	int i;
	int y;
	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 10; y++)
		{
			if (i < y)
			{
				putchar(i + '0');
				putchar(y + '0');
				if (y == 9 && i == 8)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return 0;
}
