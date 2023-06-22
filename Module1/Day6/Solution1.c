/*
Assume User will be providing input in the form of a string as show below. 
Write a function to parse the string and initialize an array of structures. 

Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };
    Note: User must be able define the no. of inputs/size of the array during runtime.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int numStudents) {
    int i;
    for (i = 0; i < numStudents; i++) {
        sscanf(input, "%d %19s %f", &(students[i].rollno), students[i].name, &(students[i].marks));
        input += strcspn(input, "\n") + 1; // Move to the next line
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // Clearing the newline character from the input buffer

    // Allocating memory for the array of structures
    struct Student* students = malloc(numStudents * sizeof(struct Student));

    printf("Enter the student details:\n");
    for (int i = 0; i < numStudents; i++) {
        char input[100];
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; // Removing the newline character from input

        parseString(input, students + i, numStudents);
    }

    // Printing the initialized array of structures
    printf("\nStudent details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    // Freeing the dynamically allocated memory
    free(students);

    return 0;
}


