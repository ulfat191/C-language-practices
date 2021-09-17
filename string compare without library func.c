#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1[100], string2[100];
    puts("Enter strings");
    gets(string1);
    gets(string2);
    int i=0, difference;
    while(string1[i]!='\0' || string2[i]!='\0')
    {
        difference=(string1[i]-string2[i]);
        if (difference!=0)
            break;
        i++;
    }
    if(difference<0)
    {
        printf("%s is greater than %s\n", string2, string1);
    }
    if(difference==0)
    {
        printf("Equal strings\n");
    }
    if(difference>0)
    {
        printf("%s is greater than %s\n", string1, string2);
    }
    return 0;
}
