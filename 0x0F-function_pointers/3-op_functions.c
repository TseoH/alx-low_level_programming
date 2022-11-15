#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - get the sum
 * @a: first number
 * @b: second number
 *
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - get the difference
 * @a: first number
 * @b: second number
 *
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - get the product
 * @a: first number
 * @b: second number
 *
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: first number
 * @b: second number
 *
 * Return: integer
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get rest of divistion
 * @a: first number
 * @b: second number
 *
 * Return: integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
