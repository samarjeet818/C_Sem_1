
#include <stdio.h>
int main() {
    float balance1, balance2;

    // Input two balances
    printf("Enter first account balance: ");
    scanf("%f", &balance1);

    printf("Enter second account balance: ");
    scanf("%f", &balance2);

    // Conditions
    int Equal = (balance1 == balance2);
    int FirstGreater = (balance1 > balance2);
    int SecondGreater = (balance2 > balance1);


    // Output results
    printf("\n--- Comparison Results ---\n");
    printf("Both balances equal: %d\n", Equal);
    printf("First balance greater: %d\n", FirstGreater);
    printf("Second balance greater: %d\n", SecondGreater);

    return 0;
    
}
