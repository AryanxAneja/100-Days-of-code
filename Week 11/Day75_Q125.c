//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include<stdio.h>
int main(){
    FILE*fp;
    char line[200];
    fp=fopen("info.txt","a");
    if(fp==NULL){
        printf("File not found\n");
        return 0;
    }
    printf("Enter a line to append: ");
    getchar(); 
    fgets(line,sizeof(line),stdin);
    fputs(line,fp);
    fclose(fp);
    printf("New line appended successfully\n");
    return 0;
}