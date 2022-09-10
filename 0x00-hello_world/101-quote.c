#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 *main - Entry Point
 *
 *Description: write foo
 *Return: 1
 */
int main(void)
{
	char *s = (char *) "and that piece of art is useful\" - ";

	char *t =(char *) "Dora Korpar, 2015-10-19\n";

	unsigned int length1 = strlen(s);

	unsigned int length2 = strlen(t);

	unsigned int sum = length1 + length2;

	char *str;

	str = malloc(length1 + length2);

	strcpy(str, s);

	strcat(str, t);

	write(1, str, sum);

	return (1);
}
