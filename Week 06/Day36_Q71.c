//Read and print a matrix.
#include<stdio.h> 
int main()
{ int arr[2][2];
    printf("Enter the elements of 2*2 matrix\n ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("THE elements of matrix are \n");
    for(int i=0;i<2;i++)
    {for (int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}