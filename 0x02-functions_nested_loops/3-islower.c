#include "main.h"
#include <ctype.h>

/**
* _islower - print islower
*
* Description : islower printer
* @c: param
* Return: 1 if True
* Or 0 if False
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
