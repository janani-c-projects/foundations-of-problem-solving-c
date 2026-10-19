
#include <stdio.h>

int main(void) {
    int marks[5];
    int total = 0;
    float average;
    int i;

    printf("===== STUDENT MARK AND GRADE CALCULATOR =====\n");

    // Get marks for five subjects
    for (i = 0; i < 5; i++) {
        printf("Enter mark for Subject %d (0-100): ", i + 1);

        if (scanf("%d", &marks[i]) != 1) {
            printf("Invalid input! Please enter numbers only.\n");
            return 1;
        }

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid mark! Enter marks between 0 and 100.\n");
            return 1;
        }

        total = total + marks[i];
    }

    // Calculate average
    average = total / 5.0;

    // Display total and average
    printf("\nTotal Marks: %d / 500\n", total);
    printf("Average: %.2f\n", average);

    // Calculate and display grade
    if (average >= 90) {
        printf("Grade: A+\n");
    } else if (average >= 80) {
        printf("Grade: A\n");
    } else if (average >= 70) {
        printf("Grade: B\n");
    } else if (average >= 60) {
        printf("Grade: C\n");
    } else if (average >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}


