#include<stdio.h>

int sumOfElements(int[], int);
int sumOfElementsViaTailRecursion(int[], int, int);

int main(){
  int arr[] = {5, 18, 11, 46};
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Sum of elements in array is: %d\n", sumOfElements(arr, size));
  printf("Sum of elements in array via Tail Recursion is: %d\n", sumOfElementsViaTailRecursion(arr, size, 0));
  return 0;
}

/*
Time: O(n)
Space: O(n)
*/
int sumOfElements(int arr[], int size) {

  if(size == 0) {
    return 0;
  }

  return arr[size - 1] + sumOfElements(arr, size - 1);
}

/*
Time: O(n)
Space: O(1)
*/
int sumOfElementsViaTailRecursion(int arr[], int size, int sum) {

  if(size == 0) {
    return sum;
  }

  return sumOfElementsViaTailRecursion(arr, size - 1, sum + arr[size - 1]);
}
