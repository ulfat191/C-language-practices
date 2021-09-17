#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello SABRINA!\n");

    int num1;
    float deci;
    char name;

    printf("\nEnter the number you want to print on the console >");
    scanf("%i", &num1);
    printf("\nThe value of num1 is: %i", num1);

    printf("\nEnter the decimal you want in the console");
    scanf("%f", &deci);
    printf("\nThe decimal value is: %.2f", deci);

    printf("\nEnter the name you want to see in the console\n");
    scanf("%s", &name);
    printf("\nThe name is displaced in the console: %s\n", name);
    return 0;
}
