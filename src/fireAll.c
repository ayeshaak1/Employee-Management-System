#include "../include/headerA3.h"

void fireAll(a3Emp ** headLL) {
  char confirmation;

  // Confirm user wants to proceed
  printf("Are you sure you want to fire everyone: ");
  scanf(" %c", &confirmation);

  if (toupper(confirmation) == 'Y'){
    while (*headLL != NULL) {
      // Store the head node in a temporary variable and move the head to the next node
      a3Emp *temp = *headLL;
      *headLL = (*headLL)->nextEmployee;

      // Free the memory for the dependent strings
      for (int i = 0; i < temp->numDependents; i++) {
        free(temp->dependents[i]);
      }
      free(temp->dependents);

      // Free the memory for the linked list node
      free(temp);
    }
    // Check if all have been fired
    if (*headLL == NULL) {
      printf("All fired. Linked list is now empty.\n");
    }
  }
  else {
      printf("No changes made to the linked list. Returning to main menu ...\n");
  }
}
