#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first=0, second=1, count=0, n, fibo;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    while(count < n)
    {
        if(count <= 1)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        count++;

           printf("%d \t", fibo);
    }
    return 0;
}
