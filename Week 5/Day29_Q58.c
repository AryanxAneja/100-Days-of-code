//Find the maximum and minimum element in an array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter a Number : ");
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Max element is : %d \n",max);
    printf("Min element is : %d \n",min);
    return 0;
}