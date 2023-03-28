#include "../include/headerA3.h"

int countEmployees(a3Emp * headLL) {
    // Local var
    int count = 0;

    // Loop until end
    while (headLL != NULL) {
        // Add to the num of employees
        count++;
        headLL = headLL->nextEmployee;
    }
    return count;
}
