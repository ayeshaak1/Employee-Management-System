#include "../include/headerA3.h"

void printAll(struct employee *headLL) {

    // Check if the LL is empty
    if (headLL == NULL) {
    printf("No employees to display.\n");
    return;
    }

    // Traverse the LL and print employee information
    struct employee *currentEmp = headLL;
    printf("Employee List:\n");
    printf("%-10s %-10s %-10s\n", "Employee", "First", "Last");
    printf("%-10s %-10s %-10s\n", "ID", "Name", "Name");
    while (currentEmp != NULL) {
        printf("%-10d %-10s %-10s\n", currentEmp->empId, currentEmp->fname, currentEmp->lname);
        // Print the names of the dependents
        printf("Dependents [%d]: ", currentEmp->numDependents);
        for (int i = 0; i < currentEmp->numDependents; i++) {
            printf("%s", currentEmp->dependents[i]);
            if (i != currentEmp->numDependents-1) {
                printf(", ");
            }
        }
        printf("\n");
        currentEmp = currentEmp->nextEmployee;
    }
}
