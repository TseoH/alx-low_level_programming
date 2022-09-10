#include <stdio.h>

/**
 *main - print size of type
 *
 *Description: Print size of type in
 *memory
 *Return: 0
 */
int main(void)
{
	char str;
	int integer;
	long int long_int;
	long long int long_longo_int;
	float float_number;

	printf("Size of a char: %lu byte(s)\n", sizeof(str));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long_longo_int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float_number));
	return (0);
}
