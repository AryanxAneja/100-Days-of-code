//check if two strings are anagram of each other .
#include<stdio.h> 
#include<string.h> 
int main()
{ char s1[110],s2[110];
    int freq[26];
    printf("Enter the first string");
    scanf("%s",s1);

    printf("Enter the second string");
    scanf("%s",s2);
    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams\n");
        return 0;}

    for (int i = 0; s1[i] != '\0'; i++) {
        freq[s1[i] - 'a']++;
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        freq[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}