#include<stdio.h>
int main(){
    for(int i = 1;i<=100;i++)
    {
        if(i%3==0)
        printf("\n Fizz");
        else if (i%5==0)
        printf("\n Buzz");
        else
        printf("\n %d",i);

    }
    return 0 ;

}