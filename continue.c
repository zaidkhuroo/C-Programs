// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

#include <stdio.h>
int main() {
   int i, a, sum = 0;

   for (i = 1; i <= 10; ++i)
    {
      printf("Enter a n %d: ", i);
      scanf("%d", &a);

      if (a < 0) 
      {
         continue;
      }

      sum = sum + a; // sum = sum + number;
   }

   printf("Sum = %d", sum);

   return 0;
}