// print the intial of names 
#include <stdio.h>

int main() {
    char name[99];

    printf("Enter your full name:\n");
    scanf("%[^\n]", name);

    // Print the first letter (first initial)
    printf("%c", name[0]);

    // Print letters after every space
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf("%c", name[i + 1]);
        }
    }

    return 0;
}