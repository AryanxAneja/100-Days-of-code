//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>

int main(){
    float cp, sp;
    printf("Enter cost price : ");
    scanf("%f", &cp);
    printf("Enter selling price : ");
    scanf("%f", &sp);
    if(cp < sp){
        printf("The profit is : %f \n", sp - cp );
        printf("Profit percentage is : %f \n ", ((sp - cp)/cp) *100 );
    } else if( cp > sp){
        printf("The loss occured is : %f \n", cp - sp);
        printf("The loss percentage is : %f \n", ((cp - sp )/cp) *100);

    } else{
        printf("No net profit or loss ");

    }
    return 0;
}