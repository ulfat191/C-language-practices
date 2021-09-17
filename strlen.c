#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter string : \n");
    char name[20];
    gets(name);
    printf("Number of characters in the string is %u\n", strlen(name));
    return 0;
}
