#include <stdio.h>
int main()
{
//     creating a 2d array 
    int a[2][3], i, j, sum = 0;

//     using nested for loops to enter the elements in array
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
    {
        {
            printf("Enter the %d element in array\n", i);
            scanf("%d", &a[i][j]);
        }
    }
//     using nestd for loops to print the elements of array
printf("elements are\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
            sum = sum + a[i][j];
          
        }
        printf("\n");
    }
      printf("\nThe sum of elements of the array is %d\n", sum);
}
