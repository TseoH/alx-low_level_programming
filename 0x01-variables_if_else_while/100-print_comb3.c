#include <stdio.h>

/**
* main - entry
*
* Description: main
* Return: 0
*/
int main(int argc, char const *argv[])
{
        for (int i = 0; i < 10; i++)
        {
                for (int y = 0; y < 10; y++)
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
