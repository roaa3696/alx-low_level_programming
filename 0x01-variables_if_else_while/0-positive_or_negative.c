#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  /* seed the random generator with current time */
  srand(time(NULL));

  /* declare the random number variable */
  int n;

  /* assign a random number to n */
  n = rand() % RAND_MAX;

  /* check if the number is positive, 0 or negative */
  if (n > 0)
  {
    printf("The number %d is positive.\n", n);
  }
  else if (n == 0)
  {
    printf("The number %d is zero.\n", n);
  }
  else
  {
    printf("The number %d is negative.\n", n);
  }

  /* return 0 to indicate successful execution */
  return 0;
}
