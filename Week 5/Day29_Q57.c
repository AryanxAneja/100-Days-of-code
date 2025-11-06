//Find the sum of array elements.
#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("Enter No of Elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter a Number : ");
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum of Elements of array is : %d",sum);
    return 0;
}