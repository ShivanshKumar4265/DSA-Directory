#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int start, end;

    printf("Enter the starting integer: ");
    scanf("%d", &start);

    printf("Enter the ending integer: ");
    scanf("%d", &end);

    if (start < 2) start = 2;

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int num = start; num <= end; num++) {
        if (is_prime(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}
