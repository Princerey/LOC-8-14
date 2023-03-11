#include <stdio.h>
#include<conio.h>
#include <math.h>
int main()
{
    int n,t,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    do{
        t=n%10;
        sum=sum+t;
        n=n/10;

    }while(n>0);
    printf("sum of digits is %d",sum);
    getch();
    return 0;
}