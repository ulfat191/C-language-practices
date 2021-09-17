#include <stdio.h>
#include <stdlib.h>
float get_input(float, float, float);
float largest_number(float, float, float);
int main()
{
    float a, b, c, largest;
    //printf("Enter 3 numbers according to your wish\n");
    //scanf("%f %f %f", &a, &b, &c);
    get_input(a,b,c);
    largest = largest_number(a,b,c);
    printf("The largest of the  numbers is %.3f\n", largest);
    return 0;
}
float get_input(float a, float b, float c)
{
  printf("Enter 3 numbers according to your wish\n");
  scanf("%f %f %f", &a, &b, &c);
  //return abc;
}
float largest_number(float a, float b, float c)
{
    if (a>b && a>c)
        return a;
    else if (b>a && b>c)
       return b;
    else
        return c;
}
