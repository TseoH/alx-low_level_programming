#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*_strncpy - print _strncpy
*
*Description: print _strncpy
*@dest : String
*@src : String
*@n : int
*Return: A char String
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *new_dest;
	char *result;
	int i = 0;

	new_dest = malloc(strlen(dest));
	while (dest[i] != '\0')
	{
		new_dest[i] = dest[i];
		i++;
	}
	return (strncpy(new_dest, src, n));
}
