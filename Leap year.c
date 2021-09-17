#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter the year you would like to check for\n");
    scanf("%d", &year);
    if(year%400==0)
        printf("It is a Leap Year\n");
    else if(year%4 == 0 && year%100 != 0)
        printf("It is a Leap Year\n");
    else
        printf("Not a Leap Year\n");
    return 0;
}
