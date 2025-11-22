//Search for an element in an array using linear search.
#include<stdio.h>
int main(){
    int n,find, notFound =1;
    printf("Enter No of Elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter a Number : ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the Number you want ot find: ");
    scanf("%d",&find);
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            printf("Found at Index: %d ",i);
            notFound = 0;
            break;
        }
    }
    if(notFound == 1){
        printf("The number does not exist in the array");
    }
    return 0;

}