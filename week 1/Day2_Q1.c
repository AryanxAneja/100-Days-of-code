//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    float l,b;
    printf("Enter length");
    scanf("%f", &l);
    printf("Enter Breadth");
    scanf("%f",&b);
    printf("Area of Rectangle is : %f \n", l*b);
    printf("Perimeter of Rectangle is : %f \n", 2*(l+b));
    return 0;

}