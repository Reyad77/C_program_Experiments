#include <stdio.h>

int countOccurrencesOfTwo(int num) {
    int count = 0;

    // Check each digit in the number
    while (num > 0) {
        int digit = num % 10;
        if (digit == 2) {
            count++;
        }
        num /= 10;
    }

    return count;
}

int main() {
    int userInput;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &userInput);

    int result = countOccurrencesOfTwo(userInput);

    // Check for singular or plural count
    if (result == 1) {
        printf("The digit 2 appeared 1 time in the given number.\n");
    } else {
        printf("The digit 2 appeared %d times in the given number.\n", result);
    }

   getch();
}
