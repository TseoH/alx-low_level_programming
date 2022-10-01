#include <stdio.h>

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
	if (argc > 1)
		printf("%d\n", argc-1);
	(void) argv;
	return (0);
}
