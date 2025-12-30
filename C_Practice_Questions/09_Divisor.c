#include <stdio.h>

int main() {
    int n, i;

    // Prompt user for input
    printf("Input: ");
    scanf("%d", &n);

    printf("All divisors of %d: ", n);

    // Loop from 1 to n to find divisors
    for (i = 1; i <= n; i++) {
        // If n is divisible by i, then i is a divisor
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
