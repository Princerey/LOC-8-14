#include<stdio.h>
#include<conio.h>
void main() {
 int n,s; 

 printf("Enter integer numbers: ");
 scanf ("%d", &n);
 s = 0;
 do {
  s += n % 10;
  n /= 10; 
 } while (n > 0);
 printf ("The Sum is = %d \n",s);
 getch();
}
