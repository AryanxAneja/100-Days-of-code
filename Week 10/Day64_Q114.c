//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output
#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);
    size_t n = strlen(s);
    int lastIndex[256];
    for(int i = 0; i < 256; i++){
        lastIndex[i] = -1;
    }
    int maxLen = 0;
    int start = 0;
    for(size_t i = 0; i < n; i++){
        char ch = s[i];

        if(lastIndex[(unsigned char)ch] >= start){
            start = lastIndex[(unsigned char)ch] + 1;
        }

        lastIndex[(unsigned char)ch] = i;

        int currentLen = i - start + 1;
        if(currentLen > maxLen){
            maxLen = currentLen;
        }
    }
    printf("Length of longest substring is: %d", maxLen);
    return 0;
}