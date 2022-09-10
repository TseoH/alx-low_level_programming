#include <stdlib.h>
#include <time.h>
/* more headers goes there */

#include <stdio.h>

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

  int number_n = (n % 10);

  if(number_n < 6 && number_n != 0)
  {
	 
	  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, number_n);
  
  }
  else if (number_n > 5)
  {
	 
	  printf("Last digit of %d is %d and is greater than 5\n", n, number_n);
  
  }
  else
  {
	 
	  printf("Last digit of %d is %d and is 0\n", n, number_n);
  
  }
  
  return (0);
}
