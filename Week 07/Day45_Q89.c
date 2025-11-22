//to count number of frequency of the given character
#include<stdio.h>
int main(){
    char ch, str[100];
    int freq = 0;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter the character of which frequency you want: ");
    scanf(" %c", &ch);
    for(int i = 0; str[i] != '\0'; i++)
    {   if(str[i] == ch)
            freq++;
    }
    printf("Number of occurrences of %c is %d\n", ch, freq);
    return 0;
}
