#include "../include/headerA3.h"

void printAll(struct employee* headLL) {
    struct employee* current = headLL;
    int numEmp = 0;

    // Print each emp info
    while (current != NULL) {
        numEmp++;
        printf("Employee # %d:\n", numEmp);

        printf("Employee id: %d\n", current->empId);

        printf("First name: %s\n", current->fname);
        printf("Last name: %s\n", current->lname);
        
        printf("Dependents [%d]: ", current->numDependents);
        for (int i = 0; i < current->numDependents; i++) {
            printf("%s", current->dependents[i]);
            if (i != current->numDependents - 1) {
                printf(", ");
            }
        }
        printf("\n");
        current = current->nextEmployee;
    }

    printf("Currently, there are %d employees.\n", numEmp);
}
