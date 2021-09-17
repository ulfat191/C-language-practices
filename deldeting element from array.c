#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, position;
    printf("Enter the total number of elements in the array\n");
    scanf("%d", &n);

    int array[n];

    for(i=0; i<n; i++)
    {
        printf("Enter element in index no [%d]\n", i);
        scanf("%d", &array[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("%d\t", array[i]);
    }

    printf("Enter the index number of the element you want to delete:\n");
    scanf("%d", &position);

    for(i=(position-1); i<(n-1); i++)//Before deleting
    {
        array[i]=array[i+1];//Shifting elements from right side to left side after deleting the element from the desired index
    }

    printf("Array after deleting element in index[%d] is as follows:\n", position);
    for(i=0; i<(n-1); i++)
    {
        printf("%d\t", array[i]);//After deleting
    }
    return 0;
}
