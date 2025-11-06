 //to finging the longest word in a sentence .
#include <stdio.h>
int main() {
    char sentence[155];
    char longest[155];

    printf("Enter a sentence:\n");
    scanf("%s", sentence); 
    int max = 0, len = 0;
    int pos = 0, longestPos = 0;

    for (int i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            len++;
        } 
        else {
            if (len > max) {       
                max = len;
                longestPos = pos;
            }
            len = 0;
            pos = i + 1;
            if (sentence[i] == '\0') 
                break;
        }
    }
    for (int i = 0; i < max; i++) {
        longest[i] = sentence[longestPos + i];
    }
    longest[max] = '\0';

    printf("Longest word: %s\n", longest);

    return 0;
}