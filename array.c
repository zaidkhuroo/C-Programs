#include<stdio.h>
int main()
{
    int a[20],i;
    for(i=0;i<=3;i++)
    { 
       printf("enter the %d element\n", i); 
        scanf("%d", &a[i]);
    }
    printf("\nOriginal: ");

    for(i=0;i<=3;i++)
    {
        printf("\t%d", a[i]);
    }

    printf("\nReverse: ");
    for(i=3;i>=0;i--)
    {
        
        printf("\t%d", a[i]);
    }
}
