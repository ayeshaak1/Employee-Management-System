#include "../include/headerA3.h"

void fireOne(a3Emp ** headLL, int whichOne) {
    // Check if the given employee ID is valid
    if (whichOne < 1 || whichOne > countEmployees(*headLL)) {
        printf("Invalid employee ID.\n");
        exit(0);
    }

    // If the first employee is to be fired
    if (whichOne == 1) {
        // Make the head of the LL point to the next employee
        a3Emp *temp = *headLL;
        *headLL = (*headLL)->nextEmployee;

        // Free the memory allocated for the employee's dependents
        for (int i = 0; i < temp->numDependents; i++) {
            free(temp->dependents[i]);
        }
        free(temp->dependents);
        free(temp);
        return;
    }

    // If a non-first employee is to be fired
    a3Emp *prev = *headLL;
    a3Emp *curr = (*headLL)->nextEmployee;
    int count = 2;
    while (curr != NULL && count < whichOne) {
        prev = curr;
        curr = curr->nextEmployee;
        count++;
    }
    prev->nextEmployee = curr->nextEmployee;

    // Free the memory allocated for the employee's dependents
    for (int i = 0; i < curr->numDependents; i++) {
        free(curr->dependents[i]);
    }
    
    free(curr->dependents);
    free(curr);
}
