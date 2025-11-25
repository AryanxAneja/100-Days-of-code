//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include<stdio.h>
int main(){
    FILE*in;
    FILE*out;
    char ch;
    in=fopen("info.txt","r");
    if(in==NULL){
        printf("info.txt not found\n");
        return 0;
    }
    out=fopen("output.txt","w");
    if(out==NULL){
        printf("Unable to create output.txt\n");
        fclose(in);
        return 0;
    }
    while((ch=fgetc(in))!=EOF){
        if(ch>='a' && ch<='z')
            ch = ch - 32;
        fputc(ch,out);
    }
    fclose(in);
    fclose(out);
    printf("Conversion complete. Check output.txt\n");
    return 0;
}