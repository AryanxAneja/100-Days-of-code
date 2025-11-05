// Write a program to print the following pattern:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include<stdio.h>
int main(){
    int n=7;
    int nsp = n/2;
    int nst = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<n/2+1){
            nsp--;
            nst +=2;
        }else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}