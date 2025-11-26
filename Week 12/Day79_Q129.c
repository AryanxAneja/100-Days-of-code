//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include<stdio.h>
int main(){
    FILE*fp;
    int num, count=0;
    long long sum=0;
    fp=fopen("numbers.txt","r");
    if(fp==NULL){
        printf("numbers.txt not found\n");
        return 0;
    }
    while(fscanf(fp,"%d",&num)==1){
        sum+=num;
        count++;
    }
    fclose(fp);
    if(count==0){
        printf("No numbers found\n");
        return 0;
    }
    printf("Sum: %d\n",sum);
    printf("Average: %f\n",(float)sum/count);
    return 0;
}