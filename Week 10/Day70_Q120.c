//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
int main(){
    FILE *in, *out;
    char str[1000];
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    if (in == NULL || out == NULL) {
        printf("File Error");
        return 0;
    }
    fgets(str, sizeof(str), in);
    int i = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = str[i] - 32;
    for (int j = i + 1; str[j] != '\0'; j++)
        if (str[j] >= 'A' && str[j] <= 'Z')
            str[j] = str[j] + 32;
    fputs(str, out);
    fclose(in);
    fclose(out);
    return 0;
}