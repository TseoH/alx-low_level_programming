#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - free string_nconcat
* @s1: char
* @s2: char
* @n: unsigned int
* Return: char *
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int i;

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
	if (s2_len >= n)
	{
		s2_len = n;
	}
	new_string = malloc(sizeof(char) * (s1_len + s2_len + n));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_len; i++)
	{
		new_string[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		new_string[i + s1_len] = s2[i];
	}
	new_string[s1_len + i] = '\0';
	return (new_string);
}
