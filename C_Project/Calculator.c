#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    // --- ENHANCED MENU SECTION ---
    printf("==============================\n");
    printf("   MULTI-FUNCTION CALCULATOR  \n");
    printf("==============================\n");
    printf(" 1. Addition (+)\n");
    printf(" 2. Subtraction (-)\n");
    printf(" 3. Multiplication (*)\n");
    printf(" 4. Division (/)\n");
    printf(" 5. Square Root [sqrt]\n"); 
    printf(" 6. Power (x^y)\n");
    printf("------------------------------\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    // --- LOGIC SECTION ---
    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            printf("Enter dividend and divisor: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 / num2;
            printf("Result: %.2f\n", result);
            break;
        case 5:
            printf("Enter number: ");
            scanf("%lf", &num1);
            result = sqrt(num1);
            printf("Square Root: %.2f\n", result);
            break;
        case 6:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid Option selected!\n");
    }

    printf("==============================\n");
    return 0;
}
