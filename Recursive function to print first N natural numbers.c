#include <stdio.h>
#include <stdlib.h>
void N_numbers(int n);

void N_numbers(int n)
{
    if(n>=1)
        N_numbers(n-1);
    printf("\t%d",n);
}

int main()
{
    int number;
    printf("Enter the nth term\n");
    scanf("%d", &number);
    N_numbers(number);
    return 0;
}
