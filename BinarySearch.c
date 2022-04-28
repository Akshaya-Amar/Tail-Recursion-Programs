#include<stdio.h>

int binarySearch(int[], int, int);
int binarySearchViaTailRecursion(int[], int, int, int);

int main(){

  int arr[] = {10, 20, 30, 40, 50};
  int target;
  printf("Enter the number to find it's index\n");
  scanf("%d", &target);
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Index of %d is %d\n", target, binarySearch(arr, size, target));
  printf("Index of %d via Tail Recursion is %d\n", target, binarySearchViaTailRecursion(arr, target, 0, size - 1));
  return 0;
}

/*
Time: O(logn)
Space: O(1)
*/
int binarySearch(int arr[], int size, int target) {

  int start = 0;
  int end = size - 1;

  while(start <= end) {

    int mid = start + ((end - start) >> 1);

    if(arr[mid] == target) {
      return mid;
    }

    if(arr[mid] < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return -1;
}

/*
Time: O(logn)
Space: O(1)
*/
int binarySearchViaTailRecursion(int arr[], int target, int start, int end) {

  if(start > end) {
    return -1;
  }

  int mid = start + ((end - start) >> 1);

  if(arr[mid] == target) {
    return mid;
  }

  if(arr[mid] < target) {
    return binarySearchViaTailRecursion(arr, target, mid + 1, end);
  }

  return binarySearchViaTailRecursion(arr, target, start, mid - 1);
}
