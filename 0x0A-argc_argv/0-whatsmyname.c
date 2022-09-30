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
		printf("%s\n", argv[0]);
	return (0);
}
