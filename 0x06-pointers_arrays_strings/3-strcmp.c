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
	unsigned long s1_size = 0;
	unsigned long s2_size = 0;
	int s1_sum = 0;
	int s2_sum = 0;

	while (s1[s1_size] != '\0')
	{
		s1_size++;
	}
	while (s2[s2_size] != '\0')
	{
		s2_size++;
	}
	for (i = 0; i < s1_size; ++i)
	{
		s1_sum += s1[i];
	}
	for (i = 0; i < s2_size; ++i)
	{
		s2_sum += s2[i];
	}
	return (s1_sum - s2_sum);
}
