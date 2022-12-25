#include <stdio.h>

struct mem
{
    int a;
    float b;
    char ch[10];
};
void display(struct mem s);
void display(struct mem s){
    printf("%s", s.ch);
    printf("%d", s.a);

}


void main()

{
struct mem s1;
printf("enter a word\n");
scanf("%s", &s1.ch);
printf("enter age\n");
scanf("%d",&s1.a);
display(s1);
}
// "%[^\n]%*c