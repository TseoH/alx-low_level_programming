#include <stdio.h>

/**
 * main - foo
 *
 * Description: main
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long prev = 0;
	unsigned long current = 1;
	unsigned long result = 0;

	while (i < 50)
	{
	    result = prev + current;
	    prev = current;
	    current = result;
	    printf("%lu", result);
	    if(i == 49)
	    {
		    printf("\n");
	    }
	    else
	    {
		    printf(", ");
	    }
	    i++;
	}
	return (0);
}
