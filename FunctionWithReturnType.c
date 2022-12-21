#include<stdio.h>
int zaid();
int main()
{
int s;
s=zaid();
printf("\nsum is %d",s);
}

int zaid()
{
    int sum;
    int a=10;
    int b=11;
    printf("a=%d, b=%d", a, b);
    sum=a+b;
    return(sum);
   
}