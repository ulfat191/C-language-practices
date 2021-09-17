#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i,n, sum;
    printf("You want the sum of?\n");
    scanf("%lf", &n);
    sum = 0;
    for (i=1; i<=n; i++){
        sum = sum + i);
    }
    printf("Sum is %lf", sum);
    return 0;
}
