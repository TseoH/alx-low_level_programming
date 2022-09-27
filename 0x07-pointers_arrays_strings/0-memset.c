#include "main.h"

/**
*_memset - printf _memset
*
*Description: _memset print
*@s: Char
*@b: Char
*@n: Unsigned Integer
*Return: Void
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for ( i = 0; i < n; ++i) {
		*(s + i) = b;
	}
	return (s);
}
