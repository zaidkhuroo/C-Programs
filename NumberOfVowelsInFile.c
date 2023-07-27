#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    FILE *fp = NULL; // declaring file pointer as equal to NULL
    char ch[100];
    // char v=0;
    unsigned short vowels = 0; 
    fp = fopen("abc.txt", "r"); // opening a file and reading it

    if (fp == NULL) // if file has nothing in it, this satement will be executed
    {
        printf("No File");
        exit(1);
    }
    while ((ch[100] = fgetc(fp)) != EOF)
    {
        if (ch[100] == 'a' || ch[100] == 'A' || ch[100] == 'e' || ch[100] == 'E' || ch[100] == 'i' || ch[100] == 'I' || ch[100] == 'o' || ch[100] == 'O' || ch[100] == 'u' || ch[100] == 'U')
        {
            vowels++;
        }

        printf("%c", ch[100]);
    }

    printf("\n");

    printf("NUMBER OF VOWELS: %hu \n", vowels);

    fclose(fp);
}
