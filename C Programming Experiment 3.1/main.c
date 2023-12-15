#include <stdio.h>

int main() {
    // Declare variables
    int num, originalNum, digit, count = 0;

    // Input: Prompt the user to enter a positive integer
    printf("Enter a positive integer with no more than 5 digits: ");
    scanf("%d", &num);

    // Store the original number for later comparison
    originalNum = num;

    // Count the number of digits
    while (num > 0) {
        digit = num % 10;
        num /= 10;
        count++;
    }

    // Output the number of digits
    printf("Positive integer digits: %d\n", count);

    // Output each digit in reverse order without commas
    printf("Digits in reverse order: ");
    while (count > 0) {
        digit = originalNum % 10;
        printf("%d", digit);

        originalNum /= 10;
        count--;

        if (count > 0) {
            printf(" ");
        }
    }

    printf("\n");

    getch();
}
