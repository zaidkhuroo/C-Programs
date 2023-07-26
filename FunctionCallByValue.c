#include<stdio.h>
void fun(int,int);
void main(int x,int y)
{
    x=10;
    y=20;
fun(x,y); 
printf("x=%d,y=%d\n",x,y);
}
void fun(int x,int y)
{
    x=5;
    y=2;
    printf("x=%d,y=%d\n",x,y);
}
