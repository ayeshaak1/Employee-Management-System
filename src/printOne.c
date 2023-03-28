#include "../include/headerA3.h"

void printOne (struct employee * headLL, int whichOne){
    // Local var
    int numEmployees = countEmployees(headLL), i = 1;
    struct employee *current = headLL;

    // Check if the requested employee number is valid
    if (whichOne < 1 || whichOne > numEmployees) {
        printf("Enter a number between 1 and %d.\n", numEmployees);
        exit(1);
    }

    // Traverse the linked list to find the requested employee
    while (i < whichOne) {
        current = current->nextEmployee;
        i++;
    }

    // Print the details of the employee
    printf("Employee #%d:\n", whichOne);
    printf("ID: %d\n", current->empId);
    printf("Name: %s %s\n", current->fname, current->lname);
    printf("Number of Dependents: %d\n", current->numDependents);
    printf("Dependents:\n");
    for (int j = 0; j < current->numDependents; j++) {
        printf("%d. %s\n", j+1, current->dependents[j]);
    }
}
