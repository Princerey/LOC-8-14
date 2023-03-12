#include<stdio.h>
int main()
{
    float a,b;
    int ch;
    printf("enter two digits");
    scanf("%f%f", &a, &b);

    printf("enter 1 for sum, 2 for diff, 3 for product, 4 for division");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1: printf("sum of %f and %f is %f",a,b, a+b); 
        break;
        case 2:
        printf("diff of %fand %f is %f",a,b, a-b);
        break;
        case 3: 
        printf("productof %f and %f is %f",a,b,a*b);
        break;
        case 4: 
        printf("quotient of %f divided by %f is %f",a,b, a/b);
        break;
        default: printf("enter correct choice");
        
    } return 0;

}
