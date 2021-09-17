#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i, n, sum = 0.0;
    printf("Enter the nth term:\n");
    scanf("%lf", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + (1/i);
    }
    printf("Sum = %.2lf\n", sum);
    return 0;
}
