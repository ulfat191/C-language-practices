#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int series(int, int);

int main()
{
    int x, power, series_i;
    printf("Enter the value of base and power_\n");
    scanf("%d %d", &x, &power);
    series_i = series(x, power);
    printf("The sum of the series is - %d\n", series_i);
    return 0;
}

int series(int a, int n)
{
    if(n==0)
        return 1;
    else
        return n * pow(a, n-1);
}
