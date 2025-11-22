//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>

int main(){
    int month;
    printf("Enter The number of month ");
    scanf("%d", &month);
    switch(month){
        case 1: printf("Month is january and it has 31 days \n");
        break;
        case 2: printf("Month is February and it has 28 days \n");
        break;
        case 3: printf("Month is March and it has 31 days \n");
        break;
        case 4: printf("Month is April and it has 30 days \n");
        break;
        case 5: printf("Month is May and it has 31 days \n");
        break;
        case 6: printf("Month is June and it has 30 days \n");
        break;
        case 7: printf("Month is July and it has 31 days \n");
        break;
        case 8: printf("Month is August and it has 31 days \n");
        break;
        case 9: printf("Month is September and it has 30 days \n");
        break;
        case 10: printf("Month is October and it has 31 days \n");
        break;
        case 11: printf("Month is November and it has 30 days \n");
        break;
        case 12: printf("Month is December and it has 31 days \n");
        break;
        default: printf("Enter a valid number between 1 and 12");
    }
    return 0;
}