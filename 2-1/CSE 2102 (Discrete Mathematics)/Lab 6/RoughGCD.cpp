#include <stdio.h>

int main ()

{

      int num, divisor; /* number and divisor */

      printf("Enter a number: ");

      scanf ("%d", &num);

      /* determine and print factors */

      printf("Prime factors: ");

      divisor = 2;

      while (num > 1)

      {

           while (num % divisor == 0)

          {

                 printf("%d ", divisor);         /* divisor is a factor, print it */

                 num /= divisor;                 /* remove the factor from num */

          }

                 divisor++;

      }

}
