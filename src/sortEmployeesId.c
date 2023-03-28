#include "../include/headerA3.h"

void sortEmployeesId(struct employee *headLL) {
    // This function sorts the linked list of employees in ascending order based on empId
    int swapped = 0;
    struct employee *current;
    struct employee *previous = NULL;

    // Check for empty linked list
    if (headLL == NULL) {
        return;
    }

    do {
        swapped = 0;
        current = headLL;

        // Traverse the linked list
        while (current->nextEmployee != previous) {
            if (current->empId > current->nextEmployee->empId) {
                // Swap data between current and next employee nodes
                swapEmployees(current, current->nextEmployee);

                swapped = 1;
            }
            current = current->nextEmployee;
        }
        previous = current;
    } while (swapped);
}
