#include "../include/headerA3.h"

void recruitEmployee (struct employee ** headLL){
    // Allocate memory for a new employee struct
    struct employee *newEmployee = malloc(sizeof(struct employee));

    // Check if the memory was allocated successfully
    if (newEmployee == NULL) {
        printf("Failed to allocate memory for new employee.\n");
        exit(0);
    }

    // User inputs information about the new employee
    printf("Enter employee's first name: ");
    scanf("%s", newEmployee->fname);
    printf("Enter employee's last name: ");
    scanf("%s", newEmployee->lname);

    // New empId = the total employees + 1
    newEmployee->empId = countEmployees(*headLL) + 1;

    // Ask user for the num of dependents + their info
    printf("Enter the number of dependents: ");
    scanf("%d", &newEmployee->numDependents);
    newEmployee->dependents = malloc(sizeof(char*) * newEmployee->numDependents);
    // Ask name of each dependent
    for (int i = 0; i < newEmployee->numDependents; i++) {
        printf("Enter name of dependent %d: ", i+1);
        char *dependent = malloc(sizeof(char) * MAX_LENGTH);
        scanf("%s", dependent);
        newEmployee->dependents[i] = dependent;
    }

    // The nextEmployee pointer = the head of the linked list
    newEmployee->nextEmployee = *headLL;
    *headLL = newEmployee;
}
