#include <stdio.h>

// Function to calculate grade based on average
char calculateGrade(float average) {
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}

void main() {
    float marks1, marks2, marks3, total, average;
    char grade;

    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    total = marks1 + marks2 + marks3;
    average = total / 3.0;
    grade = calculateGrade(average);

    printf("\nTotal Marks: %.2f", total);
    printf("\nAverage: %.2f", average);
    printf("\nGrade: %c\n", grade);
}
