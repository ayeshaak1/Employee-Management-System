#include "../include/headerA3.h"

void fireOne(a3Emp ** headLL, int whichOne) {
  a3Emp *tempPtr = *headLL, *prevPtr;
  int count = 1;

  if (tempPtr == NULL)
  {
      printf("Please add employees to the list\n");
      exit(-1);
  }

  if (whichOne < 1)
  {
      printf("Please enter a valid employee number.\n");
      exit(-1);
  }

  // Traverse LL to find the employee to be fired
  while (count < whichOne && tempPtr != NULL)
  {
      prevPtr = tempPtr;
      tempPtr = tempPtr->nextEmployee;
      count++;
  }

  // Check if employee was found
  if (tempPtr == NULL)
  {
      printf("Please enter a valid employee number.\n");
      exit(-1);
  }

  // If employee = head of LL
  if (tempPtr == *headLL) {
      *headLL = (*headLL)->nextEmployee;
  }
  else {
      prevPtr->nextEmployee = tempPtr->nextEmployee;
  }

  printf("Employee [Id: %d] fired.\n", tempPtr->empId);
  free(tempPtr);
}
