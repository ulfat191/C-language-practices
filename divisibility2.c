#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    printf("Enter an integer input: \n");
    scanf("%d", &input);

    if(input%2==0 && input%3==0)
        printf("Divisible by both\n");

    else if(input%2==0 || input%3==0)
        printf("Divisible by 2 or 3\n");
    else
        printf("Not divisible by 2 or 3\n");
    return 0;
}
