#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*_strncat - print _strncat return String
*
*Description: print _strncat
*@dest : String
*@src : String
*@n : Integer
*Return: String
*/
char *_strncat(char *dest, char *src, int n)
{
	char *new_dest;
	char *r;
	int w = 0;

	new_dest = malloc(strlen(dest));
	while (dest[w] != '\0')
	{
		new_dest[w] = dest[w];
		w++;
	}
	r = malloc(strlen(new_dest) + strlen(src));
	strcpy(r, new_dest);
	return (strncat(r, src, n));
}
