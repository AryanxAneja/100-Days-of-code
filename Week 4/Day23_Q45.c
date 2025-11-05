//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>

int main(){
    int n;
    float sum = 0.0;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num = 2 + ((i-1)*2);
        int denom = 3 + ((i-1)*4);
        sum = sum + ((float)num/denom);
    }
    printf("The sum of first %dth digits is : %f", n,sum);
    return 0;
}