#include<stdio.h>

int countDigits(int);
int countDigitsUsingTailRecursion(int, int);

int main(){
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);
  printf("Number of digits in %d are: \n", countDigits(num));
  printf("Number of digits in %d via Tail Recursion are: \n", countDigitsUsingTailRecursion(num, 0));
  return 0;
}

/*
Time: O(log n)
Space: O(log n)
*/
int countDigits(int num) {

  if(num == 0) {
    return 0;
  }

  return 1 + countDigits(num / 10);
}

/*
Time: O(log n)
Space: O(1)
*/
int countDigitsUsingTailRecursion(int num, int count) {

  if(num == 0) {
    return count;
  }

  return countDigitsUsingTailRecursion(num / 10, count + 1);
}
