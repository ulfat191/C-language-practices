#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[100], string_copy[100];
    int x;
    printf("Enter string\n");
    gets(string);
    strcpy(string_copy, string);
    strrev(string_copy);
    x=strcmp(string_copy, string);
    if(x==0)
        printf("Its a palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}
