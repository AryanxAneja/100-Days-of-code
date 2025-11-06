 // check if an matrix is symmetric 
#include <stdio.h>

int main() {
    int n;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int arr[n][n];
    int Symmetric = 1;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != arr[j][i]) {
                Symmetric = 0;
                break;
            }
        }
        if (!Symmetric)
            break;
    }

    if (Symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is NOT symmetric.\n");

    return 0;
}