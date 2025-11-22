//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, temp, digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // Store original number

    while (temp > 0) {
        digit = temp % 10;

        // Calculate factorial of the digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;      // Add factorial to sum
        temp /= 10;       // Remove last digit
    }

    // Check if strong number
    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is NOT a Strong Number.\n", num);

    return 0;
}