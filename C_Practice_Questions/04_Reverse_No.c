
#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Loop to reverse the number
    while (n != 0) {
        remainder = n % 10;           // Get the last digit
        reverse = reverse * 10 + remainder; // Append digit to reverse variable
        printf("Reversed Number: %d\n", reverse);
        n /= 10;                      // Remove the last digit from n
    }

    // Output the result

    return 0;
}
