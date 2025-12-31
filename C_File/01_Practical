#include <stdio.h>

void compute_ops(int a, int b, int *sum, int *diff, int *prod, double *quot) {
    *sum  = a + b;
    *diff = a - b;
    *prod = a * b;
    if (b != 0)
        *quot = (double)a / (double)b;
    else
        *quot = 0.0; // or handle division by zero as you prefer
}

int main(void) {
    int x = 15, y = 3;
    int s, d, p;
    double q;

    compute_ops(x, y, &s, &d, &p, &q);

    printf("x=%d, y=%d\n", x, y);
    printf("Sum=%d, Diff=%d, Prod=%d, Quot=%.6f\n", s, d, p, q);
    return 0;
}
