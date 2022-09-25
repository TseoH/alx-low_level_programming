#include "main.h"

/**
* _isupper - printf _isupper
*
* Description: _isupper print
* @c: Alphabet
* Return : Int
*/
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
