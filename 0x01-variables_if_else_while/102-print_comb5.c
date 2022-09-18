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
        for (i = 0; i < 100; i++)
        {
                for (y = 0; y < 10; y++)
                {
                        putchar((i / 10) + '0');
                        putchar((i % 10) + '0');
                        putchar(' ');
                        putchar((y / 10) + '0');
                        putchar((y % 10) + '0');
                        if (i == 98 && y == 99)
                        {
                            break;
                        }
                        else
                        {
                                putchar(',');
                                putchar(' ');
                        }
                }
        }
        putchar('\n');
        return 0;
}
