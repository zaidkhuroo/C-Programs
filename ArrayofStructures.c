#include<stdio.h>
struct names{
    int bold;
    float italic;
    char under[20]; 
};
void main(){ 

    struct names s[5];
    
    for(int i=0;i<5;++i)
    {
        printf("\nEnter the Elements to structure: ");
        scanf("%d %f %s",&s[i].bold,&s[i].italic,s[i].under);
    }
    for(int i=0;i<5;++i)
    {
        printf("\nElement in Structure: %d %f %s",s[i].bold,s[i].italic,s[i].under);
    }
}
