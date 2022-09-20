#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*_strcpy - printf _strcpy
*
*Description: _strcpy
*@dest: array
*@src: n array
*Return: void
*/
char *_strcpy(char *dest, char *src)
{
	dest = malloc(strlen(src));
	strcpy(dest, src);
	return (dest);
}
