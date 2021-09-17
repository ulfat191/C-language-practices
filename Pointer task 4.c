#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);

    int a[size];

    printf("Enter the elements in the array: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    int *p;
    p=a;
    //Stored the starting address of the array
    int x;
    int count=0;
    //Count=to print multiple outputs
    printf("\nEnter the number you want to look for in the array: \n");
    scanf("%d", &x);
    int x_i=0;
    for(i=0; i<size; i++)
    {
        if (x==a[i])
        printf("\n%d is in index [%d] and its address is %x\n", x, i, p);
        count++;
    }
    return 0;
}
