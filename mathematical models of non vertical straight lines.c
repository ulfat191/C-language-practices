#include <stdio.h>
#include <stdlib.h>
void point_slopeform(float x_1, float x_2, float y_1, float y_2, float m_1);
void two_pointform(float m_1, float c_1);
int main()
{
    puts(          "         \t\t             WELCOME                    \n"          );
    int serial;
    float x1, x2, y1, y2, m, c;
    char choice;
    printf("Do want to run a conversion:(Y or N)\n \n (Y or y)>YES and (N or n)>NO\n");
    scanf("%c", &choice);
    if(choice=='y' || choice=='Y')
    {
        printf("Enter x-y co ordinate for first point, then for second point and the y intercept:\n");
        scanf("%f %f %f %f %f", &x1, &x2, &y1, &y2, &c);
        m = (y2-y1) / (x2-x1);

        printf("\n(1)Two-point form\n \n(2)Point-slope form\n");
        printf("\nEnter serial number for mathematical process:\n");
        scanf("%d", &serial);


        switch(serial)
        {
        case 2:

            two_pointform(m, c);
            break;

        case 1:
            point_slopeform(x1, x2, y1, y2, m);
            break;
        }
    }
    if(choice=='n' || choice=='N')
    {
        return;
    }

    return 0;
}

void point_slopeform(float x_1, float x_2, float y_1, float y_2, float m_1)
{
    printf("Point-slope form:\n");
    printf("y-%.2f=m(x-%.2f)\n", y_1, m_1, x_1);
}

void two_pointform(float m_1, float c_1)
{
    printf("Two-point form:\n");
    printf("y=%.2fx+%.2f\n", m_1, c_1);
}
