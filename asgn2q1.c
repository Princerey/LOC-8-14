#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,i,freq=0;
    printf("enter number of elements in array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the %dth number of array",i+1 );
        scanf("%d",&arr[i]);
    }
    printf("enter the number of which you need frequency");
    scanf("%d",&n1);
    for (i = 0; i < n; i++)
	{
		if (arr[i]==n1)
		{
			freq++;
		}
	}
    printf("the number occured %d Times\n",freq);
    getch();
    return 0;
}