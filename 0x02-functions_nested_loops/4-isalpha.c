#include "main.h"

/**
* _isalpha - print _isalpha
*
* Description : _isalpha printer
* @c: param
* Return: 1 if True
* Or 0 if False
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
