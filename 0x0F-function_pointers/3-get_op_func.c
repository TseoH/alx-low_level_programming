#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - return correct functiondepend on
 * operand
 * @s: incoming operator
 *
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (operators[i].op != NULL && *(operators[i].op) != *s)
	{
		i++;
	}

	return (operators[i].f);
}
