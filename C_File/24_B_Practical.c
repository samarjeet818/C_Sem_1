#include <stdio.h>

void main() {
    int choice, num, i;

    do {
        printf("\nMENU:\n1. Print Table\n0. Exit\nEnter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter number: ");
            scanf("%d", &num);
            i = 1;
            do {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            } while(i <= 10);
        } else if(choice != 0) {
            printf("Invalid choice!\n");
        }
    } while(choice != 0);
}
