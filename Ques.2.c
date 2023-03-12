#include<stdio.h>
int main(){
int n; printf("input the number to be checked = ");
scanf("%d",&n);
if(n==0)
printf("number is zero");
else if(n>=1)
printf("number is positive");
else if(n<=-1)
printf("number is negative");
return 0 ; 
}