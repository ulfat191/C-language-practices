#include <stdio.h>
#include <stdlib.h>
int rev(int r);
int main()
{
    int x,y;
    printf("Enter any integer for reverse\n");
    scanf("%d", &x);
    y = rev(x);
    if(x==y)
     printf("The number is a palindrome and the result is %d\n", y);
    else
        printf("It is not a palindrome and the result is %d\n", y);
    return 0;
}
int rev (int r)
{
    int reverse = 0;
    while (r !=0){
        reverse = reverse * 10;
        reverse = reverse + r%10;
        r = r/10;
    }
    return reverse;
}
