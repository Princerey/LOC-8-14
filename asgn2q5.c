#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];
    int i, n;
 printf("number of elements to be stored");
       scanf("%d",&n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i+1);
	      scanf("%d",&arr1[i]);
	    }
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
        }
            printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% d", arr2[i]);
    }
}
