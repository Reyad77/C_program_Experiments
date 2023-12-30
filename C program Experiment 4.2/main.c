#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int i, j, count, digitCount = 0;
    int isDuplicate[n];

    for (i = 0; i < n; i++) {
        isDuplicate[i] = 0; // Initialize all elements as non-duplicates
    }

    for (i = 0; i < n; i++) {
        count = 1;
        if (isDuplicate[i] == 0) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    isDuplicate[i] = 1; // Mark the main occurrence as a duplicate
                    isDuplicate[j] = 1; // Mark other occurrences as duplicates
                    count++;
                }
            }
            if (count == 1) {
                printf("%d ", arr[i]); // Output the unique element
                // Count the number of digits in the unique element
                int temp = arr[i];
                while (temp != 0) {
                    temp /= 10;
                    digitCount++;
                }
            }
        }
    }
    return digitCount;
}

int main() {
    int arr[] = {1, 1, 2, 3, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Input: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nOutput: ");

    int digitCount = removeDuplicates(arr, n);
    printf("\nNumber of elements remaining after deleting the same element: %d\n", digitCount);

    getch();
}
