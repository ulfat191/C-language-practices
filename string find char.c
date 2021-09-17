#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void findchar(char string[], char n);

int main()
{
    char x;
    char s[10];

    puts("Enter string: \n");
    gets(s);
    printf("Enter the character to look for in the string: \n");
    scanf("%c", &x);
    findchar(s, x);
    return 0;
}

void findchar(char string[], char n)
{
    int i=0, count=0;
    while (string[i]!='\0')
    {
        if(string[i]==n)
        {
            printf("Found character %c at index no: %d\n", n, i);
            //break;
            count++;
        }
        i++;
    }
    if(i==strlen(string))
    {
        printf("No Matching character found\n");
    }
}
