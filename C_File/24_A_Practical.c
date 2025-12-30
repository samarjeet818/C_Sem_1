#include <stdio.h>

void main() {
    int choice = 1; // Initialize to 1 to enter the loop
    int num, i;

    while(choice != 0) {
        printf("\nMENU:\n1. Print Table\n0. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter number: ");
            scanf("%d", &num);
            i = 1;
            while(i <= 10) {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        } else if(choice != 0) {
            printf("Invalid choice!\n");
        }
    }
}
