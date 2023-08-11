#include<stdio.h>
#define MAX(a,b)   if(a>b)\
                    printf("%d is greater",a);\
                    else\
                    printf("%d is greater", b);
int main()
{
    MAX(3,4); 
    return 0;
    
    #undef MAX
    MAX(3,4);
    return 0;
}
