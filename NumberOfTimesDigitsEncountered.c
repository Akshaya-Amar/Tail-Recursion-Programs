/* return the number of times the digit encountered in a number
eg: num = 598799419, digit = 9, o/p -> 4 (4 because digit 9 occurred 4 times)
*/
#include<stdio.h>

int getCountOfDigits(int, int);
int getCountOfDigitsViaTailRecursion(int, int, int);

int main(){
  int num, digit;
  printf("Enter a number\n");
  scanf("%d", &num);
  printf("Enter the digit you want to count\n");
  scanf("%d", &digit);
  printf("Number of %d's in %d are %d\n", digit, num, getCountOfDigits(num, digit));
  printf("Number of %d's in %d via Tail Recursion are %d\n", digit, num, getCountOfDigitsViaTailRecursion(num, digit, 0));
  return 0;
}

/*
Time: O(log n)
Space: O(log n)
*/
int getCountOfDigits(int num, int digit) {

  if(num == 0) {
    return 0;
  }

  if((num % 10) == digit) {
    return 1 + getCountOfDigits(num / 10, digit);
  }

  return getCountOfDigits(num / 10, digit);
}

/*
Time: O(log n)
Space: O(1)
*/
int getCountOfDigitsViaTailRecursion(int num, int digit, int count) {

  if(num == 0) {
    return count;
  }

  if((num % 10) == digit) {
    return getCountOfDigitsViaTailRecursion(num / 10, digit, count + 1);
  }

  return getCountOfDigitsViaTailRecursion(num / 10, digit, count);
}
