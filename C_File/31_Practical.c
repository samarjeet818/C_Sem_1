#include <stdio.h>

int max_of_two(int *a, int *b) {
    return (*a > *b) ? *a : *b;
}

int main(void) {
    int a = 12, b = 19;
    int max = max_of_two(&a, &b);
    printf("Maximum of %d and %d is %d\n", a, b, max);
    return 0;
}
