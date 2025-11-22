//Write a program to find the LCM of two numbers.
#include<stdio.h>

int main(){
    int num1,num2,hcf,lcm;
    printf("Entetr the two integers : ");
    scanf("%d %d", &num1,&num2);
    for(int i=1;i<=num1 && i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            hcf = i;
        }
    }
    lcm = (num1 * num2) / hcf;
    printf("The lcm of %d and %d is : %d", num1,num2, lcm);

}