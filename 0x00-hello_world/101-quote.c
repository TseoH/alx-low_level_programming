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
	char *s = (char *) "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int length = strlen(s);

	write(1, s, length);

	return (1);
}
