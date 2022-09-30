#include <stdio.h>
#include <stdlib.h>

/**
*main - printf foo name
*
*Description: main print
*@argc: Integer
*@argv: String array
*/
int main(int argc, char *argv[])
{
	int a;
	int b;

	if(argc > 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		return (a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
