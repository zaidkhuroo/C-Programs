#include<stdio.h>
int main(){
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    printf("\nValue of a: %d", a);
    printf("\nValue of b: %d", *q);
    printf("\nAddress of a: %x", &a);//add of a
    printf("\nAddress of a: %x", p);//shows the same result as above
    printf("\nAddress of b: %x", q);
}   
