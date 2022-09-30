#include <stdio.h>
#include <stdlib.h>

/**
*main - printf foo name
*
*Description: main print
*@argc: Integer
*@argv: String array
*Return: Return a value Integer
*/
int main(int argc, char *argv[])
{
	int contain_letter = 0;
	int i;
	int r = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; ++i)
		{
			if (*argv[i] != 48 && atoi(argv[i]) == 0)
			{
				contain_letter = 1;
				break;
			}
			else
			{
				r += atoi(argv[i]);
			}
		}
		if (contain_letter)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", r);
			return (0);
		}
	}
	printf("0\n");
	return (0);
}
