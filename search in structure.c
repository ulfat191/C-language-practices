#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee
{
  char name[20];
  int emp_id;
  int salary;
}e;

int main()
{
    int i, n, j;
    printf("Enter the total no. of employees:\n");
    scanf("%d", &n);
    fflush(stdin);
    e emp[n];

    for (i=0; i<n; i++)
    {
        printf("Enter %d.Employee name:\n \nEmployee ID:\n \nEmployee salary:\n", (i+1));
        gets(emp[i].name);
        fflush(stdin);
        scanf("%d", &emp[i].emp_id);
        fflush(stdin);
        scanf("%d", &emp[i].salary);
        fflush(stdin);
    }

    printf("Enter the employee ID you want to look for\n");
    scanf("%d", &j);
    fflush(stdin);

    for(i=0; i<n; i++)
    {
        if(j==emp[i].emp_id)//if index of input matches the index in predefined array
        {
           break;
        }
        if(i<n)
            printf("Employee record found at index number %d\n", i);
        else
            printf("Employee not found\n");
    }
    return 0;
}
