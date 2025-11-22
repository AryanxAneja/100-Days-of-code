//Count even and odd numbers in an array.
#include<stdio.h>
int main(){
    int n,even = 0,odd = 0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter a Number : ");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even +=1;
        }else{
            odd +=1;
        }
        
    }
    printf("Total Even elements are : %d \n",even);
        
        printf("Total Odd elements are : %d",odd);
    return 0;
}