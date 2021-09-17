#include <stdio.h>
#include <stdlib.h>
int get_char(int c);
//int because it matches the ASCII value.
void main()
{
    char ch;
    ch = get_char(ch);
    printf(" You Pressed the alphabet %c", ch);
    return 0;
}
int get_char(c)
{
    //char c;
    printf("Enter any character\n");
    scanf("%c", &c);
    while (c >= 'a' && c <= 'z')
        return c;
}
