#include <stdio.h>
int main() {
    char name[50];
    float basic, hra, da, gross, tax, net;

    printf("Enter Name and Basic Salary: ");
    scanf("%s %f", name, &basic);

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;
    tax = gross * 0.05;
    net = gross - tax;

    printf("Final Net Salary for %s: %.2f\n", name, net);
    return 0;
}