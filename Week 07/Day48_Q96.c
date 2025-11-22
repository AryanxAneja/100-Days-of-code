//Reverse each word in a sentence without changing the word order.
#include <stdio.h> 
#include <string.h>

int main() {
    char sentence[177];

    printf("Enter a sentence:\n");
    scanf("%s", sentence);

    int start = 0;
    for (int i = 0; ; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {

            int left = start;
            int right = i - 1;
            while (left < right) {
                char temp = sentence[left];
                sentence[left] = sentence[right];
                sentence[right] = temp;
                left++;
                right--;
            }

            if (sentence[i] == '\0')
                break;

            start = i + 1;
        }
    }

    printf("Output is : %s\n", sentence);

    return 0;
}