//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include<stdio.h>
int main(){
    FILE*fp;
    char ch;
    int vowels=0, consonants=0;
    fp=fopen("info.txt","r");
    if(fp==NULL){
        printf("File not found\n");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            char c = ch;
            if(c>='A' && c<='Z')
                c = c + 32;

            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else
                consonants++;
        }
    }
    fclose(fp);
    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d\n",consonants);
    return 0;
}