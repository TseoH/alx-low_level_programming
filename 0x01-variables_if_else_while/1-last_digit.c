#include <stdlib.h>
#include <time.h>
/* more headers goes there */

#include <stdio.h>
#include <string.h>

/* betty style doc for function main goes there */
/**
 *main - entry
 *
 *Description: The Greather
 *Return: 0
 */
int main(void)
{
  int n;
  
  srand(time(0));

  n = rand() - RAND_MAX / 2;
  /* your code goes there */

  char *defautl_str = (char *)"Last digit of %d and is ";

  char *five_str = (char *)"greater than 5";

  char *zero_str = (char *)"0";

  char *six_str = (char *)"less than 6 and not 0";
   
  if(n < 6 && n != 0)
  {
    char *mgs = malloc(strlen(defautl_str) + strlen(six_str));
    
    strcpy(mgs, defautl_str);

    strcat(mgs, six_str);

    printf(mgs, n);
  }
  else if (n > 5)
  {
    char *mgs =  malloc(strlen(defautl_str) + strlen(five_str));
    strcpy(mgs, defautl_str);

    strcat(mgs, five_str);

    printf(mgs, n);

  }
  else
  {
    char *mgs =  malloc(strlen(defautl_str) + strlen(zero_str));
    strcpy(mgs, defautl_str);

    strcat(mgs, zero_str);

    printf(mgs, n);
  }
  
  return (0);
}
