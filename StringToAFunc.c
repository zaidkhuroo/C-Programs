#include<stdio.h>
void display(char[],char[]);
void main(){

    char x[]="meet me right now";
    char y[]="call my name"; 
    display(x,y); 
}
void display(char x[],char y[])
{
    printf("%s %s",x,y);
    int i,length=0;
    for(i=0;x[i]!=0;i++){
length=length+1;

    }
    printf("\nLength of string is: %d",length);
}
