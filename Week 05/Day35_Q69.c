// Write a program to find the first and second largest elements in an array
#include<stdio.h>
int main()
{ int n, max, smax ;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

   int arr[n];

   printf("Enter %d elements :\n",n);
   for( int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   max= arr[0];
    smax=arr[0];

    for(int i=1;i<n;i++)
    {  if(max<arr[i])
        { smax =max;
            max = arr[i];
        ;
        }
        else if(smax<arr[i] && max!=arr[i])
        {
            smax=arr[i];
        } 
    }

        printf("first largest element is %d\n",max );
        printf("second largest element is %d\n",smax );
 
    return 0;
}