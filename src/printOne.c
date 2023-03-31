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
    printf("Employee ID: %d\n", current->empId);
    printf("First name: %s\n", current->fname);
    printf("Last name: %s\n", current->lname);
    printf("Dependents:");
    for (int j = 0; j < current->numDependents; j++) {
        printf(" %s", current->dependents[j]);
        if (j == current->numDependents-2){
          printf(" and");
        }
        // Don't print ',' for last dependent
        else if (j != current->numDependents-1){
          printf(",");
        }

    }
}
