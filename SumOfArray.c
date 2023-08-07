#include<stdio.h>
int main(){ 
    int a[3];
    int a2[3],i,sum=0;
    int new[3];

    for(i=0;i<=3;i++)
    {
        printf("enter element");
scanf("%d", &a[i]);
    }
     printf("2nd array\n");
    for(i=0;i<=3;i++)
    {
        printf("enter element");
scanf("%d", &a2[i]);
    }
    for(i=0;i<=3;i++)
    {
    new[i]=a[i] + a2[i];
    printf("the sum is: %d\n", new[i]);
}
}
