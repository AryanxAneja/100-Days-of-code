//Find the sum of main diagonal elements for the square matrix 
#include <stdio.h> 

int main() {
    int n, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int arr[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}