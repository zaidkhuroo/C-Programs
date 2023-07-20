#include <stdio.h>
int main()
{
    int a[100];
    int i, j, temp, n;
    printf("Enter the size of array\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    { 
        printf("Enter the element \t");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf(" \n %d Element of array: \t %d",i+1, a[i]);
    }
    // sorting the array
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {

            if (a[i] < a[j])
            {

                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorted array:");
    for (i = 0; i < n; i++)
        printf("\t%d", a[i]);
}
