#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, columns, target, count=0;
    printf("Enter the number of rows and columns:_\n");
    scanf("%d %d", &rows, &columns);

    int array[rows][columns];

    int i,j;
    printf("Enter the elements in the array:\n");


    for(i=0; i<rows; i++)
    {
      for(j=0; j<columns; j++)
      {
          scanf("%d", &array[i][j]);
      }
    }

        printf("Enter the number you want to look for:\n");
        scanf("%d", &target);

        for(i=0; i<rows; i++)
    {
      for(j=0; j<columns; j++)
      {
          printf("%d\t", array[i][j]);
      }
      printf("\n");
    }

            for(i=0; i<rows; i++)
    {
      for(j=0; j<columns; j++)
      {
          printf("Element in index [%d][%d] is %d\n", i, j, array[i][j]);
      }
    }


            for(i=0; i<rows; i++)
    {
      for(j=0; j<columns; j++)
      {
          if(target==array[i][j])
          {
              printf("\nTarget number %d is in index number array[%d][%d]\n", target, i, j);
              count++;
          }
          else
            printf("\nNo matching number found\n");
            break;
      }
    }


    return 0;
}
