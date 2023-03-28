#include "../include/headerA3.h"

/* Helper function
 *
 * Swaps employee info
 */
void swapEmployees(struct employee *emp1, struct employee *emp2) {
    // This function swaps the data between two employee nodes
    char tempFname[MAX_LENGTH], tempLname[MAX_LENGTH];
    int tempId, tempNumDependents;
    char **tempDependents;

    // Swap first name
    strcpy(tempFname, emp1->fname);
    strcpy(emp1->fname, emp2->fname);
    strcpy(emp2->fname, tempFname);

    // Swap last name
    strcpy(tempLname, emp1->lname);
    strcpy(emp1->lname, emp2->lname);
    strcpy(emp2->lname, tempLname);

    // Swap empId
    tempId = emp1->empId;
    emp1->empId = emp2->empId;
    emp2->empId = tempId;

    // Swap numDependents
    tempNumDependents = emp1->numDependents;
    emp1->numDependents = emp2->numDependents;
    emp2->numDependents = tempNumDependents;

    // Swap dependents
    tempDependents = emp1->dependents;
    emp1->dependents = emp2->dependents;
    emp2->dependents = tempDependents;
}
