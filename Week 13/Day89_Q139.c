//Show that enums store integers by printing assigned values.
#include <stdio.h>
enum Days{
    MON = 10,
    TUE = 20,
    WED = 30,
    THU = 40,
    FRI = 50
};
int main(){

    printf("MON = %d\n", MON);
    printf("TUE = %d\n", TUE);
    printf("WED = %d\n", WED);
    printf("THU = %d\n", THU);
    printf("FRI = %d\n", FRI);

    return 0;
}