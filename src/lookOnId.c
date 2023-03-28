#include "../include/headerA3.h"

int lookOnId(struct employee *headLL, int whichEmpId) {
    // Local var
    struct employee *current = headLL;
    int position = 1;

    // Traverse the linked list until the end is reached
    while (current != NULL) {
        // If the current employee's ID matches the search ID, return the current position
        if (current->empId == whichEmpId) {
            return position;
        }

        // Move on to the next employee and increment the position
        current = current->nextEmployee;
        position++;
    }

    // If the employee with the given ID is not found, print an error message and return -1
    printf("Employee with ID %d not found.\n", whichEmpId);
    return -1;
}
