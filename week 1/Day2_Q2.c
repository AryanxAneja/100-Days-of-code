//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    float r;
    printf("Enter radius : ");
    scanf("%f",&r);
    printf("Area of circle is :%f \n", 3.14*r*r);
    printf("Circumference of circle is :%f", 2*3.14*r);
    return 0;
}