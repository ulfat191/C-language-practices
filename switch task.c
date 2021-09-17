#include <stdio.h>
#include <stdlib.h>
int get_input(int, int);
int operation(char, int, int);
int main()
{
    int a, b,input, ch, result;
    //a = 50;
    //b = 25;
    input = get_input(a,b);
    printf("Enter an operator\n");
    scanf("%c", &ch);
    result = operation(ch, a, b);
    printf("The result is %d\n", result);
    return 0;
}
int get_input(int a, int b)
{
  printf("Enter two operands\n");
  scanf("%d %d", &a, &b);
  return a,b;
}
int operation(char c, int a, int b)
{
    switch(c)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    case '%':
        return a%b;
        break;
    }
}
