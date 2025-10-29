//Write a program to print all factors of a given number.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the Integer : ");
    scanf("%d", &n);
    printf("The factors are : \n");

    for(int i=1; i<=n;i++){
        if(n%i==0)
        printf("%d \n", i);
    }
    return 0;
}