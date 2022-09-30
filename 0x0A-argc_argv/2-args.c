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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; ++i)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
