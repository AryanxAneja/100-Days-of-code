/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include<stdio.h>

int main(){
    float units;
    printf("Enter the amount of units consumed : ");
    scanf("%f", &units);

    if(units <= 100){
        printf("Electricity bill is : %f \n", units * 5);
    } else if(units <= 200 ){
        printf("Electricity bill is : %f \n", (100*5) + (units -100) *7 );
    } else if(units<= 300){
        printf("Electricity bill is : %f", (100*5) + (100*7) + (units -200)*10 );
    } else {
        printf("Electricity bill is : %f", (100 *5)+ (100*7)+ (units - 300)*12 );
    }
    return 0;
    }