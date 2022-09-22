#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	char *new_dest = malloc(strlen(dest));
	char *r;
	int w = 0;

	while (dest[w] != '\0')
	{
		new_dest[w] = dest[w];
	}
	r = malloc(strlen(new_dest) + strlen(src));
	strcpy(r, new_dest);
	return (strncat(r, src, n));
}
