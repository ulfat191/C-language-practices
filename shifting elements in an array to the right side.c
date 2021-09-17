#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, del;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++)
    {
        printf("Enter element in index no [%d]\n", i);
        scanf("%d", &a[i]);
    }

    del = a[n-1];//The last index element will be assigned to del

    for(i=(n-2); i>=0; i--)
    {
        a[i+1]=a[i];//The late index being replaced by initial index
    }

    a[0] = del;//Index no[0] will always hold del or the last index element
    printf("Modified array:\n");

    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);//After shifting
    }
    return 0;
}
