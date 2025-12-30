#include <stdio.h>
int main() {
    int status, presentDays = 0;
    printf("Enter 1 for Present, 0 for Absent\n");
    for(int i = 1; i <= 30; i++) {
        printf("Day %d: ", i);
        scanf("%d", &status);
        if(status == 1) {
            presentDays++;
        }
    }
    printf("Total Present Days: %d\n", presentDays);
    return 0;
}