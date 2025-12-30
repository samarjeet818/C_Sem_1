#include <stdio.h>
int main() {
    int x = 5, y;
    
    y = ++x; // Pre-increment: Increment x first, then assign to y
    printf("Pre-increment: x=%d, y=%d\n", x, y); // x=6, y=6

    x = 5; // Reset
    y = x++; // Post-increment: Assign x to y first, then increment x
    printf("Post-increment: x=%d, y=%d\n", x, y); // x=6, y=5
    return 0;
}