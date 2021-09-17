#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, x, y, gcd, lcm;
    printf("Enter the 2 integers:\n");
    scanf("%d  %d", &num1, &num2);
    x = num1;
    y = num2;
    // x, y  for lcm;
    while(num1!=num2)
    {
        if(num1>num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
    }
    printf("GCD is = %d\n", num1);

    gcd = num1;

    lcm = (x * y) / gcd;
    printf("LCM is = %d\n", lcm);
    return 0;
}
