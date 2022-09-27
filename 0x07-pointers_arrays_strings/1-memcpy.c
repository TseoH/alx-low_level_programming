#include "main.h"

/**
*_memcpy - printf _memcpy
*
*Description: _memcpy print
*@dest: Char
*@src: Char
*@n: Unsigned Integer
*Return: Void
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
