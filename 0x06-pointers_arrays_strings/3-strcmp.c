#include "main.h"

/**
* _strcmp - print _strcmp
*
* Description: print _strcmp
* @s1: String
* @s2: String
* Return: Boolean
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int s1_sum = 0;
	int s2_sum = 0;

	for (i = 0; i < strlen(s1); ++i)
	{
		s1_sum += s1[i];
	}
	for (i = 0; i < strlen(s2); ++i)
	{
		s2_sum += s2[i];
	}
	return (s1_sum - s2_sum);
}
