 // Write a program to find the transpose of a matrix
#include<stdio.h>
int main()
{int rows , cols ; 
    printf("Enter the number of rows and columns : \n");
    scanf("%d%d",&rows,&cols);

    int arr[rows][cols];
   int  temp [rows][cols];
    printf("Enter the number of elements : \n");
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            temp[j][i]=arr[i][j];
        }
    }
    printf("transpose of matrix is \n");
    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
}