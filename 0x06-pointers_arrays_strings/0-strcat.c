#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
* _strcat - print _strcat
*
* Description: print _strcat
* @param dest : String
* @param src : String
* @return char *
*/
char *_strcat(char *dest, char *src)
{
	char *result;
	char *new_dest;
	int i = 0;
	int z = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	new_dest = malloc(i);
	while (dest[z] != '\0')
	{
		new_dest[z] = dest[z];
		z++;
	}
	result = malloc(strlen(new_dest) + strlen(src));
	strcpy(result, new_dest);
	return (strcat(result, src));
}
