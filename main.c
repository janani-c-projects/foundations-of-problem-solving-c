	#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float average;
    int i;

    printf("===== STUDENT MARK AND GRADE CALCULATOR =====\n");

    for (i = 0; i < 5; i++) {
        printf("Enter mark for Subject %d (0-100): ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid mark! Enter marks from 0 to 100.\n");
            return 1;
        }

        total = total + marks[i];
    }

    average = total / 5.0;

    printf("\nTotal Marks: %d / 500\n", total);
    printf("Average: %.2f\n", average);

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
