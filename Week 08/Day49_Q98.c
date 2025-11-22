//print initials of a name with surname displayed in full 
#include <stdio.h> 

int main() {
    char name[100];
    int i;

    printf("Enter your full name:\n");
    scanf("%[^\n]", name);


    printf("%c", name[0]);

    int lastSpace = -1;
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }
    //printing intial of all 
    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ') {
            printf("%c", name[i + 1]);
        }
    }

    printf(" %s", name + lastSpace + 1);

    return 0;
}