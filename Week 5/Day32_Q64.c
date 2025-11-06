//Write a program to find the digit which occurs maximum times in a number
#include<stdio.h> 
int main(){
     int freq[10]={0}; 
    int num,digit;
    printf("Enter a number:");
    scanf("%d",&num);   

    if(num<0)
    {
        num=-num;
    }
        while(num>0)
        {
            digit=num%10;
            freq[digit]++;
            num=num/10;
        }

        int maxdigit=0 , maxfreq=freq[0];
        for (int i = 1; i < 10; i++) {
        if (freq[i] > maxfreq) {
            maxfreq = freq[i];
            maxdigit = i;                 
        }
    }

    printf("Digit occurring most times: %d\n", maxdigit);
    printf("Frequency: %d\n", maxfreq);

    return 0;
}