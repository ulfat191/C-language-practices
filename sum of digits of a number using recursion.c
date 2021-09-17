#include <stdio.h>
#include <stdlib.h>
int sum(int x);

int sum(int x)
{
    if(x==0)
        return 0;
    else
        return (x%10 + sum(x/10));
}
int main()
{
    int a;
    printf("Enter a number of multiple digits\n");
    scanf("%d", &a);
    printf("Sum = %d\n", sum(a));
    return 0;
}
