// Write a program to insert an element at a given position in an array
#include<stdio.h> 
int main(){
    int n,pos,element;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int  arr[n+1];
    
    printf("Enter %d elements :\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to be inserted (0 to %d):",n);
    scanf("%d", &pos);
    printf("Enter the element you want to insert:");
    scanf("%d", &element);

    int i =n-1 ;
    while(i>=pos-1)
    {arr[i+1]=arr[i];
        i--;
    }
    
    arr[pos-1]=element;
    n++ ;
    printf("the new array is : \n");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
 return 0  ;
}