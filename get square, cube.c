#include <stdio.h>
#include <stdlib.h>
void get_square(int n);
void get_cube (int I);
int main()
{
    int number;
    printf("Input any number:\n");
    scanf("%d", &number);
    get_square(number);
    get_cube(number);
    return 0;
}

void get_square(int n)
{
    int square;
    square = n * n;
    printf("Square of the number is = %d\n", square);
}

void get_cube (int I)
{
    int cube;
    cube = I * I * I;
    printf("Cube of the number is = %d\n", cube);
}
