#include <stdio.h>
#include <stdlib.h>
void reverse_array(int *p);//, int size1);
int main()
{
    int i;//, //size;
    //printf("Enter the size of the array: \n");
    //scanf("%d", &size);
    int a[5];
    printf("Enter 5 elements in the array: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    reverse_array(a);
    return 0;
}

void reverse_array(int *p)//, //int size1)
{
    int j;
    for(j=4; j>=0; j--)
    {
        printf("%d\t", *(p+j));
    }
}
