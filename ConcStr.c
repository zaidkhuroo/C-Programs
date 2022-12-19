#include<stdio.h>
#include<string.h>

int main()
{
    char ch[05]={'b','c','d','e'};
    char ch2[03]={'a'};
    strcat(ch,ch2);
    printf("the concatenated string is %s", ch);
    return 0;
}
