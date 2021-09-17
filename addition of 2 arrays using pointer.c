#include <stdio.h>
#include <stdlib.h>
int summation(int *p, int *q, int size);
int main()
{
    int size1;
    printf("Enter the size of the two arrays: \n");
    scanf("%d", &size1);
    int a[size1];
    int b[size1];
    int *x;
    int *y;
    x=a;
    y=b;
    int s;
    s=summation(&x, &y, size1);
    printf("The summation of the elements of the 2 arrays is= %d\n", s);
    return 0;
}

int summation(int *p, int *q, int size)
{
    int c;
    printf("Enter the elements inside the first array: \n");
    int i;
    for(i=0; i<size; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("Enter elements inside the second array: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &q[i]);
    }
    for (i=0, c=0; i<size; i++)
    {
        c=c+p[i]+q[i];
    }
    return c;
}
