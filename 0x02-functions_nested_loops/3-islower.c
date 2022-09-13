#include "main.h"
#include <ctype.h>

/**
* islower - print islower
*
* Description : islower
* @c - param
* Return: 1 if True
* Return: 0 if False
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
