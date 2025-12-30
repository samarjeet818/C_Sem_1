#include <stdio.h>
int main() {
    int i = 10;
    float f = 5.5;
    char c = 'A';
    double d = 20.99;

    printf("Int: %d (Size: %lu bytes)\n", i, sizeof(i));
    printf("Float: %.2f (Size: %lu bytes)\n", f, sizeof(f));
    printf("Char: %c (Size: %lu bytes)\n", c, sizeof(c));
    printf("Double: %.2lf (Size: %lu bytes)\n", d, sizeof(d));
    return 0;
}