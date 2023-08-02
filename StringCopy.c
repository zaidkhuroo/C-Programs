#include<stdio.h>
#include<string.h>

int main()
{ 
    char ch[05]={'b','c','d','e'};
    char ch2[05];
    strcpy(ch2,ch);
    printf("the final string is %s", ch2);
    return 0;
}
