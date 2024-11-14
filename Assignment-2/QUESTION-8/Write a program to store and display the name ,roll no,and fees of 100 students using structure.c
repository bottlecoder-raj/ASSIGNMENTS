#include <stdio.h>
#define NUM_STUDENTS 100

// Define the structure for a student
struct Student {
    char name[50];
    int roll_no;
    float fees;
};

int main() {
    struct Student students[NUM_STUDENTS];  // Array of 100 students

    // Input student details
    printf("Enter details of %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]%*c", students[i].name);  // Read a line of text including spaces
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Fees: ");
        scanf("%f", &students[i].fees);
    }

    // Display student details
    printf("\nDisplaying details of %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Fees: %.2f\n", students[i].fees);
    }

    return 0;
}
