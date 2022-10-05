#include <stdlib.h>
#include <string.h>

/**
*str_concat - printf str_concat
*
*Description: str_concat print
*@s1: Integer
*@s2: String array
*Return: Return a value
*/
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t lent2;
	size_t i, k;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	lent2 = strlen(s2);
	str = malloc(len1 + lent2 + 1);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < len1; ++i)
	{
		str[i] = s1[i];
	}

	for (k = 0; k <= lent2; ++k)
	{
		str[len1 + k] = s2[k];
	}
	return (str);
}
