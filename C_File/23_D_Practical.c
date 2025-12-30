#include <stdio.h>

int main() {
    int i, j;
    // Reverse right-angle triangle with 5 columns and 5 rows
    printf("Reverse Triangle:\n");
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
