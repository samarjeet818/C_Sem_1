#include <stdio.h>
int main() {
    float b1, b2;
    printf("Enter two account balances: ");
    scanf("%f %f", &b1, &b2);

    printf("Equal: %d\n", b1 == b2);
    printf("First is Greater: %d\n", b1 > b2);
    printf("Second is Greater: %d\n", b2 > b1);
    return 0;
}