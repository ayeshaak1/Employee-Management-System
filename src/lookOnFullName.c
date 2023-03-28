#include "../include/headerA3.h"

int lookOnFullName(struct employee *headLL, char whichName[100]) {
    // Local var
    char firstName[MAX_LENGTH], lastName[MAX_LENGTH];
    struct employee *current = headLL;
    int position = 1;

    // Store first and last name from whichName
    sscanf(whichName, "%s %s", firstName, lastName);

    while (current != NULL) {
        // Find an employee whose first or last name matches the input string
        if (strcmp(current->fname, firstName) == 0 && strcmp(current->lname, lastName) == 0) {
            return position;
        }
        current = current->nextEmployee;
        position++;
    }

    // If the employee with the given name is not found, print an error message and return -1
    printf("Employee with name %s not found.\n", whichName);
    return -1;
}
