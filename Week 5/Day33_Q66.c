// Write a program to insert an element in a sorted array
#include<stdio.h> 
int main()
{int n , element ;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int  arr[n+1];
    
    printf("Enter %d elements (sorted):\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element:");
    scanf("%d", &element);

    int i =n-1 ;
    while(i>=0 && arr[i]>element)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=element;
    n++ ;
    printf("the new array is : \n");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
 return 0  ; 
}