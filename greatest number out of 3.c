#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the 3 numbers to compare: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>num2 && num1>num3)
        printf("%d is greatest among the 3 inputs\n", num1);
    else if(num2>num1 && num2>num3)
        printf("%d is greatest\n", num2);
    else
        printf("%d is greatest\n", num3);
    return 0;
}
