//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include<stdio.h>
enum Status{
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main(){
    enum Status s;
    int x;
    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d",&x);
    if(x==SUCCESS)
        printf("Operation Successful\n");
    else if(x==FAILURE)
        printf("Operation Failed\n");
    else if(x==TIMEOUT)
        printf("Operation Timed Out\n");
    else
        printf("Invalid Status\n");

    return 0;
}