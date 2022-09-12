#include <stdio.h>
#include <string.h>

/**
 * Main is entry
 *
 * Description: Print alphabet with put-char
 */
int main(void)
{
  char letters[] = "abcdefghijklmnopqrstuvwxyz\n";

  long unsigned int i =0;

  for (i = 0; i < strlen(letters); i++) {
    putchar(letters[i]);
  }
  return (0);
}
