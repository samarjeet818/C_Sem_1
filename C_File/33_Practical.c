#include <stdio.h>

void factorial(int n, unsigned long long *result) {
    if (n < 0) {
        *result = 0; // undefined for negative numbers
        return;
    }
    unsigned long long res = 1;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    *result = res;
}

int main(void) {
    int n = 10;
    unsigned long long fact;
    factorial(n, &fact);
    printf("%d! = %llu\n", n, fact);
    return 0;
}
