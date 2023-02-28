#include <stdio.h>
int main()
{
    int a[2][3], i, j, sum = 0;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
    {
        {
            printf("Enter the %d element in array\n", i);
            scanf("%d", &a[i][j]);
        }
    }
printf("Original Matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
           // sum = sum + a[i][j];
        }
    }
        printf("\n");
        printf("Transposed Matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t",a[j][i]);
           // sum = sum + a[i][j];
        }
        printf("\n");
    }
     // printf("\nThe sum of elements of the array is %d\n", sum);          
}
