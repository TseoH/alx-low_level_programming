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
	unsigned long event_result = 0;

	while (i < 50)
	{
		result = prev + current;
		prev = current;
		current = result;
		if (result < 4000000 && result % 2 == 0)
		{
			event_result += result;
		}
		i++;
	}
	printf("%lu\n", event_result);
	return (0);
}
