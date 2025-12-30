#include <stdio.h>

void main() {
    int day;
    printf("Enter day number (1-6): ");
    scanf("%d", &day);

    if(day == 1)
        printf("Monday: C Programming\n");
    else if(day == 2)
        printf("Tuesday: Physics\n");
    else if(day == 3)
        printf("Wednesday: Chemistry\n");
    else if(day == 4)
        printf("Thursday: Lab Session\n");
    else if(day == 5)
        printf("Friday: Mathematics\n");
    else if(day == 6)
        printf("Saturday: Sports\n");
    else
        printf("Invalid Input! Enter 1-6.\n");
}
