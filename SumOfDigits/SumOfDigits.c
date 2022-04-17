#include<stdio.h>

int sumOfDigits(int);
int sumOfDigitsUsingTailRecursion(int, int);

int main(){
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);
  printf("Sum of digits of %d is: %d\n", sumOfDigits(num));
  printf("%Sum of digits of %d via Tail Recursion is: %d\n", sumOfDigitsUsingTailRecursion(num, 0));
  return 0;
}

/*
Time: O(log n)
Space: O(log n)
*/
int sumOfDigits(int num) {

  if(num == 0) {
    return 0;
  }

  return (num % 10) + sumOfDigits(num / 10);
}

/*
Time: O(log n)
Space: O(1)
*/
int sumOfDigitsUsingTailRecursion(int num, int sum) {

  if(num == 0) {
    return sum;
  }

  return sumOfDigitsUsingTailRecursion(num / 10, sum + (num % 10));
}
