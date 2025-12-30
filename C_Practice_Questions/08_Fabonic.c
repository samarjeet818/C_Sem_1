#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Input: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", t1, t2); // Print first two terms

    // Loop starts from 3 because we already printed 1 and 2
    for (i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        
        // Update variables for next round
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
