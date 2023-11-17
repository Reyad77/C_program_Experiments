#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;    }
    }
    return 1;
}
int main() {
    printf("Prime numbers between 100 and 200 are:\n");
    for (int i = 100; i <= 200; ++i) {
        if (is_prime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
