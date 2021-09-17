#include <stdio.h>
#include <stdlib.h>
void multiply(int x, int y);

void multiply(int x, int y)
{
    printf("First value entered is_ %d\n", x);
    printf("Second value entered is_ %d\n", y);
    printf("Multiplication = %d\n", x * y);
}

int main()
{
    int a, b;
    int (*pointer)(int, int);//pointer syntax
    pointer = multiply;//function pointed
    printf("Enter 2 values\n");
    scanf("%d %d", &a, &b);
    multiply(a,b);//function called
    return 0;
}
