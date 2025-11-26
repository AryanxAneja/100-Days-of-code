//Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum Numbers{
    ONE = 10,
    TWO,
    THREE,
    FOUR
};
int main(){
    printf("ONE = %d\n", ONE);
    printf("TWO = %d\n", TWO);
    printf("THREE = %d\n", THREE);
    printf("FOUR = %d\n", FOUR);
    return 0;
}