#include <stdio.h>
#include <stdlib.h>

void revArr(int a[], int s);

int main()
{
    int n,i;
    printf("Enter size : ");
    scanf("%d",&n);

    int a[n];

    printf("Enter A : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    revArr(a,n);

    return 0;
}

void revArr(int a[], int n){

    int i, j;
    int b[n];

    j = n-1;
    for(i=0;i<n;i++){
        b[i] = a[j];
        j--;
    }
    printf("reverse array : ");

    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}
