#include "main.h"
#include <string.h>

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
	int hasSameLength = strlen(s1) == strlen(s2);
	int hasSameSum;
	size_t s1_sum = 0;
	size_t s2_sum = 0;

	for (i = 0; i < strlen(s1); ++i) {
		s1_sum += s1[i];
	}
	for (i = 0; i < strlen(s2); ++i) {
		s2_sum += s2[i];
	}
	hasSameSum = s1_sum == s2_sum;
	return (hasSameLength && hasSameSum);
}
