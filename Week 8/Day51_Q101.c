// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include<stdio.h>
int main(){
    int n;
    int nums[n];
    printf("Enter no of Elements : ");
    scanf("%d",&n);
    printf("Enter Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(nums[j]>nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        
    }
}