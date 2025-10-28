//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>

int main(){
    int n;
    int binary[32];
    int index = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n == 0){
        printf("Binary Representation: 0\n");
        return 0;
    }

    while(n > 0){
        binary[index] = n % 2;
        n = n / 2;
        index++;
    }

    printf("Binary Representation: ");
    for(int i = index - 1; i >= 0; i--){
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}