#include "main.h"

/**
* times_table - print times_table
*
* Description : times_table printer
* Return: void
*/
void times_table(void)
{
        int x, y, i;
        
        for (x = 0; x <= 9; x++)
        {
                _putchar('0');
                _putchar(',');
                _putchar(' ');
                for (y = 1; y <= 9; y++)
                {
                        d = (x * y);
                        if ((i / 10) > 0)
                        {
                                _putchar((i / 10) + '0');
                        }
                        else
                        {
                                _putchar(' ');
                        }
                        _putchar((i % 10) + '0');
                        if (y < 9)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                }
                _putchar('\n');
        }
}
