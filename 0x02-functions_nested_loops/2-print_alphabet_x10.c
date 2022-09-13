#include "main.h"

/**
* print_alphabet_x10 - print alphabet*10
*
* Description : print_alphabet_x10
* Return: void
*/
void print_alphabet_x10(void)
{
    int i = 0;
    int k;

    while (i < 10)
    {
        for (k = 'a'; k <= 'z' ; ++k) {
            putchar(k);
        }
        putchar('\n');
        i++;
    }

}
