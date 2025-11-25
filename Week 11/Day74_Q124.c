//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include<stdio.h>
int main(){
    FILE*src;
    FILE*dest;
    char source[100], target[100];
    int ch;
    printf("Enter source filename: ");
    scanf("%s",source);
    printf("Enter destination filename: ");
    scanf("%s",target);
    src=fopen(source,"r");
    if(src==NULL){
        printf("Cannot open source file\n");
        return 0;
    }
    dest=fopen(target,"w");
    if(dest==NULL){
        printf("Cannot open destination file\n");
        fclose(src);
        return 0;
    }
    while((ch=fgetc(src))!=EOF){
        fputc(ch,dest);
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfully\n");
    return 0;
}