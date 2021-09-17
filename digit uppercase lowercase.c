#include <stdio.h>
#include <stdlib.h>
void ASCII(char);
int main()
{
    char ch;
    printf("Enter any character\n");
    scanf("%c", &ch);
    ASCII (ch);
    return 0;
}
void ASCII(char c)
{
    if (c >= '0' && c <= '9')
        printf("It is a DIGIT\n");
    else if (c >= 'A' && c <= 'Z')
        printf("It is an UPPERCASE alphabet\n");
    else if (c >= 'a' && c <= 'z')
       printf("It is a LOWERCASE alphabet\n");
    else
        printf("Invalid INPUT\n");
}
