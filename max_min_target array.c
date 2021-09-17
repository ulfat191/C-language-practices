#include <stdio.h>
#include <stdlib.h>
int max_min_target(int a[], int n, int target);
int main()
{
    int a[]={5,54,75,48,85,7,5};
    max_min_target(a,7,7);
    return 0;
}
int max_min_target(int a[], int n, int target)
{
    int i;
    int max = a[0];
    int max_i = 0;
    int min = a[0];
    int min_i = 0;
    int target_i = 0;

    for(i=0; i<n; ++i)
    {
        if(max<a[i]){
            max = a[i];
            max_i = i;
        }
        if(min>a[i]){
            min = a[i];
            min_i = i;
        }
        if(target==a[i]){
            target_i = i;
        }
    }
    printf("Max number is %d and its index number is %d\n", max, max_i);
    printf("Min number is %d and its index number is %d\n", min, min_i);
    printf("Target search number is found at index number: %d\n", target_i);
}
