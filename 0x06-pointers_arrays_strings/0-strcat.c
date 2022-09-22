#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
* _strcat - print _strcat
*
* Description: print _strcat
* @param dest
* @param src
* @return char *
*/
char *_strcat(char *dest, char *src)
{
	char *result = malloc(strlen(dest) + strlen(src));
	strcpy(result, dest);
	return (strcat(result, src));
}
