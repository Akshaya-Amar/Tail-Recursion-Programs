/*
A number is said to be perfect if the sum of its positive divisor, excluding the number itself, is equal to the number
eg:
6 is a perfect number because(1 + 2 + 3 == 6)
28 is a perfect number because(1 + 2 + 4 + 7 + 14 == 28)
*/

#include<stdio.h>

int getSumOfDivisors(int, int);
int getSumOfDivisorsViaTailRecursion(int, int, int);

int main(){
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);
  int sumOfDivisors = getSumOfDivisors(num, num / 2);
  if(sumOfDivisors == num) {
    printf("%d is a perfect number\n", num);
  } else {
    printf("%d is not a perfect number\n", num);
  }

  // one liner using ternary operator
  printf("%d is %s number\n", num, sumOfDivisors == num ? "a perfect" : "not a perfect");

  sumOfDivisors = getSumOfDivisorsViaTailRecursion(num, num / 2, 0);
  if(sumOfDivisors == num) {
    printf("%d is a perfect number\n", num);
  } else {
    printf("%d is not a perfect number\n", num);
  }
  return 0;
}

/*
Time: O(n)
Space: O(n)
*/
int getSumOfDivisors(int num, int divisor) {

  if(divisor == 1) {
    return 1;
  }

  if(num % divisor == 0) {
    return divisor + getSumOfDivisors(num, divisor - 1);
  }

  return getSumOfDivisors(num, divisor - 1);
}

/*
Time: O(n)
Space: O(1)
NOTE: In each invocation of the function, only one recursive call will be executed and that recursive call
will be the last one to be executed inside the function. So, both the recursive calls are tail recursive.
i.e. getSumOfDivisorsViaTailRecursion(num, divisor - 1, sum + divisor);
and getSumOfDivisorsViaTailRecursion(num, divisor - 1, sum);
both are tail recursive.
*/
int getSumOfDivisorsViaTailRecursion(int num, int divisor, int sum) {

  if(divisor == 1) {
    return sum + 1;
  }

  if(num % divisor == 0) {
    return getSumOfDivisorsViaTailRecursion(num, divisor - 1, sum + divisor);
  }

  return getSumOfDivisorsViaTailRecursion(num, divisor - 1, sum);
}
