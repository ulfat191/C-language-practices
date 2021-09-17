#include <stdio.h>
#include <stdlib.h>
int fact(int);

int main()
{
    int n, factorial;
    printf("Enter the number you want to find the factorial of_\n");
    scanf("%d", &n);
    factorial = fact(n);
    printf("Factorial = %d\n", factorial);
    return 0;
}

int fact(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x * fact(x-1);
    }
}
