#include <stdio.h>
#include <stdlib.h>

typedef struct man
{
    int p,q;
}man;

int dist(man a, man b);

int main()
{
    man x, y;
    int result;
    printf("Enter x co-ordinate first and then y co-ordinate for both p and q\n");
    scanf("%d%d%d%d", &x.p, &x.q, &y.p, &y.q);
    result = dist(x,y);
    printf("Manhattan Distance between 2 points = %d", result);
    return 0;
}

int dist(man a, man b)
{
    int MD;
    MD =abs(a.p-a.q) + abs(b.p-b.q);
    return MD;
}
