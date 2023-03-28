#include "../include/headerA3.h"

void recruitEmployee(struct employee **headLL) {
    // create new employee node
    struct employee *newEmployee = malloc(sizeof(struct employee));

    // get first name and last name from user input
    printf("Enter the first name of the employee: ");
    scanf("%s", newEmployee->fname);
    printf("Enter the last name of the employee: ");
    scanf("%s", newEmployee->lname);

    // get dependent names from user input
    int numDependents = 0;
    char dependentName[MAX_LENGTH];
    do {
        printf("Enter name of dependent# %d: ", numDependents + 1);
        scanf("%s", dependentName);
        newEmployee->dependents = realloc(newEmployee->dependents, sizeof(char*) * (numDependents + 1));
        newEmployee->dependents[numDependents] = malloc(sizeof(char) * MAX_LENGTH);
        strcpy(newEmployee->dependents[numDependents], dependentName);
        numDependents++;
        // ask user if there are more dependents
        char moreDependents;
        printf("Do you have any more dependents? ");
        scanf(" %c", &moreDependents);
        moreDependents = toupper(moreDependents);
        if (moreDependents == 'N') {
            break;
        }
    } while (1);
    newEmployee->numDependents = numDependents;

    // generate empId based on first and last name
    int sum = 0;
    for (int i = 0; i < strlen(newEmployee->fname); i++) {
        sum += newEmployee->fname[i];
    }
    int empId = sum + strlen(newEmployee->lname);
    // check if empId already exists in linked list and generate new one if needed
    struct employee *currentEmployee = *headLL;
    while (currentEmployee != NULL) {
        if (currentEmployee->empId == empId) {
            empId += rand() % 999 + 1;
            currentEmployee = *headLL;
        } else {
            currentEmployee = currentEmployee->nextEmployee;
        }
    }
    newEmployee->empId = empId;

    // add new employee node to end of linked list
    newEmployee->nextEmployee = NULL;
    if (*headLL == NULL) {
        *headLL = newEmployee;
    } else {
        struct employee *lastEmployee = *headLL;
        while (lastEmployee->nextEmployee != NULL) {
            lastEmployee = lastEmployee->nextEmployee;
        }
        lastEmployee->nextEmployee = newEmployee;
    }

    printf("You have %d dependents.\n", numDependents);
    printf("Your computer-generated empId is %d\n", empId);
}
