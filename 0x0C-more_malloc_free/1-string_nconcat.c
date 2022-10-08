#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - free string_nconcat
* @s1: char
* @s1: char
* @n: nsigned int
* Return: char *
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int i;
	unsigned int k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	new_string = malloc(sizeof(char) * (s1_len + s2_len + n));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; ++i)
	{
		new_string[i] = s1[i];
	}
	if (n >= s2_len)
	{
		for (k = 0; k < s2_len + 1; ++k)
		{
			new_string[i + 1 +k] = s2[k];
		}
	}
	else
	{
		for (k = 0; k < n + 1; ++k)
		{
			new_string[i + 1 +k] = s2[k];
		}
	}
	return (new_string);
}
