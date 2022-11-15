#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all paramters.
 * @n: paramters number
 * @...: paramters
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index;
	unsigned int result = 0;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
	{
		result += va_arg(numbers, int);
	}

	va_end(numbers);

	return (result);
}
