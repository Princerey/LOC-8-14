#include<stdio.h>
int main(){
float r,d,p,a;
printf("enter radius of circle");
scanf("%f",&r);
d=2*r;
p=2*3.14*r;
a=3.14*r*r;
printf("diameter=%f",d);
printf("circumferance=%f",p);
printf("area=%f",a);
return 0 ;
}