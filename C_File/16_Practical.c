#include <stdio.h>
int main() {
    int signal;
    printf("Enter 1 (Red), 2 (Yellow), 3 (Green): ");
    scanf("%d", &signal);

    switch(signal) {
        case 1: printf("Stop\n"); break;
        case 2: printf("Ready\n"); break;
        case 3: printf("Go\n"); break;
        default: printf("Invalid Input\n");
    }
    return 0;
}