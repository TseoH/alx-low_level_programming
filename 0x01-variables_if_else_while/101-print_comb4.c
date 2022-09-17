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
        int z;

        for (i = 0; i < 10; i++)
        {
                for (y = 0; y < 10; y++)
                {
                        for (z = 0; z < 10; z++) {
                                if (i < y && y < z)
                                {
                                        putchar(i + '0');
                                        putchar(y + '0');
                                        putchar(z + '0');
                                        if (i == 7 && y == 8 && z == 9)
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
        }
        putchar('\n');
        return 0;
}
