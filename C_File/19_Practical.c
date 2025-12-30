#include <stdio.h>
int main() {
    int units, total = 0;
    for(int i = 1; i <= 7; i++) {
        printf("Enter usage for Day %d: ", i);
        scanf("%d", &units);
        total += units;
    }
    printf("Total Weekly Consumption: %d units\n", total);
    return 0;
}