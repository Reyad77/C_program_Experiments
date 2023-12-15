#include <stdio.h>

int main() {
    // Declare arrays x and y//
    int x[10], y[10];

    // Input elements for array x//
    printf("Enter 10 elements for array x:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &x[i]);
    }

    // Input elements for array y//
    printf("Enter 10 elements for array y:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &y[i]);
    }

    // Calculate minimum absolute difference//
    int minDifference = abs(x[0] - y[0]);
    for (int i = 1; i < 10; i++) {
        int currentDifference = abs(x[i] - y[i]);
        if (currentDifference < minDifference) {
            minDifference = currentDifference;
        }
    }

    // Output the minimum absolute difference//
    printf("The minimum absolute difference between the arrays is: %d\n", minDifference);

    getch();
}
