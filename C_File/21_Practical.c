#include <stdio.h>
int main() {
    float km, total = 0;
    for(int i = 1; i <= 30; i++) {
        printf("Enter km walked on Day %d: ", i);
        scanf("%f", &km);
        total += km;
    }
    printf("Total distance walked in month: %.2f km\n", total);
    return 0;
}