#include <stdio.h>

int main() {
    int i, j;
    // Right-angle triangle with 5 columns and 5 rows
    printf("Right-Angle Triangle:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
