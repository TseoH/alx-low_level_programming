#include <stdio.h>

void __attribute__((constructor)) _print_before(void);
/**
* _print_before - print before main
* Description: print before main
* Return: void
*/
void _print_before(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
