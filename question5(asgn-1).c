#include <stdio.h>
#include<conio.h>
#include <math.h>
int main()
{
    float r,dia,circ,area;
    printf("enter the radious:");
    scanf("%f",&r);
    dia=2*r;
    circ=2*3.14*r;
    area=3.14*r*r;
    printf("diameter is %f",dia);
    printf("circumference is %f",circ);
    printf("area is : %f",area);
    getch();
    return 0;
}