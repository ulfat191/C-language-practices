#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=5, j;
    for(i=1; i<=5; i++)
        {if (i%2==0)
                    printf("-");
                else
                    printf("+");
            for (j=1; j<=i; ++j)


            printf("\n");
        }
    return 0;
}
