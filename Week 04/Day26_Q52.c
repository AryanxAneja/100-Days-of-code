// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *
#include<stdio.h>
int main(){
    int n=5;
    int nst =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
            printf("\n");
        }if(i<n/2+1){
        nst+=2;
        printf("\n");}
        else{
            nst-=2;
            printf("\n");
        }
    }
    return 0;
}