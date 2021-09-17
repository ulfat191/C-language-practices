#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("Enter 2 strings_\n");
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    int l;
    l=strcmp(s1,s2);
    if(l==-1)
    {
        printf("s1 is smaller than s1 and string length is %u\n", strlen(s1));
    }
    if(l==0)
    {
        printf("s1 and s2 is equal and string length is %u\n", strlen(s1));
    }
    if(l==1)
    {
        printf("s1 is greater than s2 and string length is %u\n", strlen(s1));
    }
    return 0;
}
