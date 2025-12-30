#include <stdio.h>
int main() {
    float balance;
    printf("Enter initial balance: ");
    scanf("%f", &balance);

    balance += 100; // Interest
    printf("After Interest (+100): %.2f\n", balance);
    balance -= 50;  // Charges
    printf("After Charges (-50): %.2f\n", balance);
    balance *= 2;   // Bonus
    printf("After Bonus (*2): %.2f\n", balance);
    balance /= 2;   // Division
    printf("After Division (/2): %.2f\n", balance);
    
    return 0;
}