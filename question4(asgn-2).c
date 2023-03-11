#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char op;
   // printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values of a & b ");
    scanf("%d %d %c",&a,&b,&op);
    switch(op)
    {
    case '+'	:
        printf("Sum is %d",a+b);
        break;
    case '-'	:
        printf("Difference is  %d",a-b);
        break;
    case '*'	:
        printf("Multiplication is %d",a*b);
        break;
    case '/'  :
        printf("Division is %d",a/b);
        break;
    default	:
        printf("operator is invalid");
        break;
    }
    getch();
    return 0;
}