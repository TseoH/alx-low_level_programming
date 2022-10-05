#include <stdlib.h>
#include <string.h>

/**
*create_array - printf create_array
*
*Description: create_array print
*@s1: Integer
*@s2: String array
*Return: Return a value
*/
char *_strdup(char *str)
{
	size_t len;
	size_t i;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	new_str = malloc((sizeof(char) * len) + 1);
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}
	for (i = 0; i <= len; ++i)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
