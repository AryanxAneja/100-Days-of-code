// Write a program to calculate row wise sum of a matrix
#include<stdio.h> 
int main()
{ int rows , cols ;
    printf("Enter the number of rows and columns : \n");
    scanf("%d%d",&rows,&cols);
    int arr[rows][cols];
    int rowsum[rows];
    printf("Enter the elements of the matrix ");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    } 
    for(int i=0;i<rows;i++)
    {  rowsum[i]=0;
        for(int j=0;j<cols;j++)
        {
            rowsum[i]= rowsum[i]+ arr[i][j];
        }
        
    }
     printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d = %d\n", i + 1, rowsum[i]);
    }
}