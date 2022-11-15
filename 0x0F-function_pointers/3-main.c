#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print operation result
 * @argc: arg number
 * @argv: arguments
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int number_1;
	int number_2;
	char *operand;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number_1 = atoi(argv[1]);
	operand = argv[2];
	number_2 = atoi(argv[3]);

	if (get_op_func(operand) == NULL || operand[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operand == '/' && number_2 == 0) ||
	    (*operand == '%' && number_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operand)(number_1, number_2));

	return (0);
}
