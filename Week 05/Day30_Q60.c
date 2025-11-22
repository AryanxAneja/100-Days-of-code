//Count positive, negative, and zero elements in an array.
#include<stdio.h>
int main(){
    int n, positive= 0,negative = 0,zero = 0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter a Number : ");
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            positive +=1;
        }else if (arr[i]==0){
            zero +=1;
        }
        else{
            negative +=1;
        }
    }
    printf("Total positive elements are : %d \n",positive);
    printf("Total zero elements are : %d \n",zero);
    printf("Total negative elements are : %d \n",negative);
    return 0;
}