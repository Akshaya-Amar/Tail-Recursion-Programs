#include<stdio.h>

int getEvenElementsCount(int[], int);
int getEvenElementsCountViaTailRecursion(int[], int, int);

int main(){
  int arr[] = {3, 9, 2, 6, 7, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Total number of even elements: %d\n", getEvenElementsCount(arr, size));
  printf("Total number of even elements via Tail Recursion: %d\n", getEvenElementsCountViaTailRecursion(arr, size, 0));
  return 0;
}

/*
Time: O(n)
Space: O(n)
*/
int getEvenElementsCount(int arr[], int size) {

    if(size == 0) {
      return 0;
    }

    if((arr[size - 1] & 1) == 0) { // equivalent to if((arr[size - 1] % 2) == 0)
      return 1 + getEvenElementsCount(arr, size - 1);
    }

    return getEvenElementsCount(arr, size - 1);
}

/*

Time: O(n)
Space: O(1)
NOTE: In each invocation of the function, only one recursive call will be executed and that recursive call
will be the last one to be executed inside the function. So, both the recursive calls are tail recursive.
i.e. return getEvenElementsCountViaTailRecursion(arr, size - 1, evenElementsCount + 1)
and return getEvenElementsCountViaTailRecursion(arr, size - 1, evenElementsCount)
both are tail recursive.

*/
int getEvenElementsCountViaTailRecursion(int arr[], int size, int evenElementsCount) {

  if(size == 0) {
    return evenElementsCount;
  }

  if((arr[size - 1] & 1) == 0) { // equivalent to if((arr[size - 1] % 2) == 0)
    return getEvenElementsCountViaTailRecursion(arr, size - 1, evenElementsCount + 1);
  }

  return getEvenElementsCountViaTailRecursion(arr, size - 1, evenElementsCount);
}
