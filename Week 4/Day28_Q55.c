//Write a program to print all the prime numbers from 1 to n.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Prime numbers are 2");
    for(int i=3;i<=n;i++){
        int prime =1;
        for(int j =2;j<i;j++){
            if(i%j==0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            printf(", %d",i);
        }
    }
    return 0;
}