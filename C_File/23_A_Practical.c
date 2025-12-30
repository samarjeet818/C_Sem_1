#include <stdio.h>

int main() {
    int i, j;
    // Rectangle with 7 columns and 4 rows
    printf("Rectangle Pattern:\n");
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 7; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
