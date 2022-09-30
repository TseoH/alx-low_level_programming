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
	int a;
	int b;
	int r;

	if (argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		r = (a * b);
		printf("%d\n", r);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
