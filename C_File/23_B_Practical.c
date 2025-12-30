#include <stdio.h>

int main() {
    int i, j;
    // Square with 4 columns and 4 rows
    printf("Square Pattern:\n");
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 4; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
