#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct project
{
    char name[20];
    int cellnumber;
    char message[500];
};
void review(struct project);

int main()
{
    struct project p1;
    printf("Enter your feedback:\n \nWrite your name first\n \nThen Your contact number\n \nAnd then your review for us\n");
    gets(p1.name);
    fflush(stdin);
    scanf("%d", &p1.cellnumber);
    fflush(stdin);
    gets(p1.message);
    fflush(stdin);
    review(p1);
    return 0;
}

void review(struct project p_1)
{
    printf("Name of the user - %s\n \nContact number of the user - %d\n \nMessage from the user - %s\n", p_1.name, p_1.cellnumber, p_1.message);
}
