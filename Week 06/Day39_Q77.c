 // Check if the diagonal element of the matrix are zero 
#include<stdio.h>
int main()
{ int n ; 
    printf("Enter the size of square matrix (2*2)");
    scanf("%d",&n);

    int arr[n][n];
   int  distinct = 1 ;
   int diag[n];
    
   printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        diag[i] = arr[i][i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }
    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;

}