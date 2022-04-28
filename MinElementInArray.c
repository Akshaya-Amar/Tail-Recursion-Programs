#include<stdio.h>

int getMinVal(int[], int);
int getMinValUsingTailRecursion(int[], int, int);

int main(){
  int num;
  printf("Enter the number of elements you want to enter\n");
  scanf("%d", &num);
  int arr[num];
  int i;
  for(i = 0; i < num; ++i) {
    scanf("%d", &arr[i]);
  }

  printf("Minimum element in the array is %d\n", getMinVal(arr, num - 1));
  printf("Minimum element in the array using Tail Recursion is %d\n", getMinValUsingTailRecursion(arr, num, arr[0]));
  return 0;
}

/*
Time: O(n)
Space: O(n)
*/
int getMinVal(int arr[], int size) {

  if(size == 0) {
    return arr[0];
  }

  int min = getMinVal(arr, size - 1);
  if(arr[size] < min) {
    return arr[size];
  }

  return min;
}

/*
Time: O(n)
Space: O(1)
*/
int getMinValUsingTailRecursion(int arr[], int size, int min) {

  if(size == 1) {
    return min;
  }

  if(arr[size - 1] < min) {
    return getMinValUsingTailRecursion(arr, size - 1, arr[size - 1]);
  }

  return getMinValUsingTailRecursion(arr, size - 1, min);
}
