#include <unistd.h>
#include "main.h"

/**
 * main - putchar
 *
 * Description: printer
 * Return: input
 */
int main(char c)
{
	return (write(1, &c, 1));
}
