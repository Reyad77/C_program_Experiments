#include <stdio.h>

int main() {
    // Declare variables
    int n;

    // Input: Prompt the user to enter an integer n
    printf("Enter an integer n (1 <= n <= 9): ");
    scanf("%d", &n);

    // Validate input range
    if (n < 1 || n > 9) {
        printf("Invalid input. n should be between 1 and 9.\n");
        return 1;  // Exit with an error code
    }

    // Print the diamond pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    getch();
}
