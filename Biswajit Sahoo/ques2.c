#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: \n");
    scanf ("%d",&num);
    if (num > 0){
        printf("The no. is positive\n");
    }else if(num < 0){
        printf("The no. is negetive\n");
    }else{
        printf("The no. is zero\n");
    }
    return 0;
}