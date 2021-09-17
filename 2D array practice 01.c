#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ulfat[100][100], i, j, rows, columns;
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    printf("Enter the number of columns:\n");
    scanf("%d", &columns);
    for(i=0; i<rows; ++i)
    {
        for(j=0; j<columns; ++j)
    {
            printf("ulfat[%d][%d]\n", i, j);
            scanf("%d", &ulfat[i][j]);
    }
    }
    for(i=0; i<rows; ++i)
    {
        for(j=0; j<columns; ++j)
    {
            printf("Values in array ulfat [%d][%d] are %d\n", i, j, ulfat[i][j]);
    }
        printf("\n");
    }
    //printf("Hello world!\n");
    return 0;
}
