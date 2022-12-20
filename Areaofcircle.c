//AREA OF CIRCLE

#include<stdio.h>
int main()
{
    float radius, pi, area;
    pi = 3.14;
    printf("Enter the radius: ", radius);
    scanf ("%f", &radius);
    area = radius*radius*pi;
    printf("Area of circle is %f",area);
    return 0;
}