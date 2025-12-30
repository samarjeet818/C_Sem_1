#include <stdio.h>
int main() {
    int units;
    float bill = 0;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Assuming simple slab rates
    if (units <= 100) bill = units * 5;
    else bill = (100 * 5) + ((units - 100) * 7);

    printf("Total Bill: %.2f\n", bill);
    return 0;
}