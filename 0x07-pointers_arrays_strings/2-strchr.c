#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*_strchr - printf _strchr
*
*Description: _strchr print
*@s: Char
*@c: Char
*Return: char
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	unsigned int y = 0;
	char *str = NULL;
	size_t length = strlen(s);

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str = (char *) malloc(length * sizeof(char));
			while (s[i] !=  '\0')
			{
				*(str + y) = *(s + i);
				y++;
			}
			break;
		}
		i++;
	}
	return (str);
}
