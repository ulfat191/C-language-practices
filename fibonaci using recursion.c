#include <stdio.h>
#include <stdlib.h>
int fibo (int);

int main()
{
    int n, x;
    printf("Enter the nth term of the series: _\n");
    scanf("%d", &n);
    for(x=0; x<n; x++)
    {
        printf("%d\t", fibo(x));
    }
    return 0;
}

int fibo(int i)
{
    if(i==0)
    {
        return 0;
    }
    if(i==1)
    {
        return 1;
    }
    else
        return fibo(i-1) + fibo(i-2);
}
