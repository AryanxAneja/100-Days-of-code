// Write a program to delete an element from a given position in an array

#include <stdio.h> 
int main() {
    int n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    int index = pos - 1;

   
    if (index < 0 || index >= n) {
        printf("Invalid position.\n");
        return 1;
    }

    
    int i = index;
    while (i < n - 1) {
        arr[i] = arr[i + 1];
        i++;
    }

    n = n - 1; 

    printf("Array after deletion: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}