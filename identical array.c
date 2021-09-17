#include <stdio.h>
#include <stdlib.h>

int isIdentical(int a[], int b[], int s);

int main()
{
    int n,i, id;
    printf("Enter size : ");
    scanf("%d",&n);

    int a[n];
    int b[n];

    printf("Enter A : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter B : ");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    id = isIdentical(a,b,n);

    if(id==1)
        printf("Identical \n");
    else
        printf("Not Identical \n");

    return 0;
}

int isIdentical(int a[], int b[], int n){

    int i;
    int id = 1;

    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            id = 0;
            break;
        }
    }

    return id;
}
