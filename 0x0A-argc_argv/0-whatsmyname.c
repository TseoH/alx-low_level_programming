#include <stdio.h>

/**
*main - printf foo name
*
*Description: main print
*@argc: Integer
*@argv: String array
*/
int main(int argc, char *argv[])
{
	if(argc > 0)
		printf("%d", *argv[argc-1]);
	return (0);
}
