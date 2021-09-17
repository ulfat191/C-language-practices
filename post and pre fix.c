#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nsu;
    nsu = 50;
    printf("\nThe result of line 1 is changed to: %d", ++nsu);
    printf("\nThe extension of line 1 is: %d", nsu);

    //nsu = 51;
    nsu += 2;
    printf("\nThe result of line 2 is changed to: %d", nsu--);
    printf("\nThe previous value should be added with 1: %d", ++nsu);

    //nsu = 53;
    nsu -= 2;
    printf("\nThe new value for line 3 is: %d", nsu++);
    printf("\nThe next line value is: %d", ++nsu);

    //nsu = 53;
    nsu -= 3;
    //nsu = 50;
    nsu /= 5;
    printf("\nThe new value for line 4 is:%d", nsu);
    //nsu = 10;
    return 0;
}
