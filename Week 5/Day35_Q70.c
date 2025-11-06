// Write a program to right rotate an array by k positions
#include<stdio.h> 
int main()
{
    int n, k;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n],temp[n];
    printf("Enter the %d elements \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of how much you have to rotate :");
    scanf("%d",&k);
    k=k%n;
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];}
    for (int i = 0; i < n; i++){
        arr[i] = temp[i];
    }
    printf("Array after right rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;

}