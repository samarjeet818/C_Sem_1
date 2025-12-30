#include <stdio.h>

void main() {
    int i, j, rows = 5;
    // Central triangle with 5 columns and 5 rows
    printf("Central Triangle:\n");
    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}
