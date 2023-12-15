#include <stdio.h>

int main() {
    // Declare variables//
    int n;
    double s = 0.0;

    // Input: Prompt the user to enter an integer n//
    printf("Enter an integer n (1 <= n <= 100): ");
    scanf("%d", &n);

    // Validate input range//
    if (n < 1 || n > 100) {
        printf("Invalid input. n should be between 1 and 100.\n");
        return 1;  // Exit with an error code
    }

    // Calculate the value of s using the provided formula//
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            s += 1.0 / (2 * i - 1);
        } else {
            s -= 1.0 / (2 * i - 1);
        }
    }

    // Output the value of s to 2 decimal places//
    printf("The value of s: %.2f\n", s);

    getch();
}
