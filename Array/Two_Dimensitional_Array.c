#include <stdio.h>

int main() {
    int numStudents, numSubjects;

    printf("Number of Students: ");
    scanf("%d", &numStudents);

    printf("Number of Subjects: ");
    scanf("%d", &numSubjects);

    int marks[numStudents][numSubjects];

    // Input marks
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numSubjects; j++) {
            printf("Enter marks for Student %d, Subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Display marks
    printf("\nMarks Table:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < numSubjects; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
