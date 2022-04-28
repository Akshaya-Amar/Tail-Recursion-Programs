/*
GCD using Euclid's Algorithm.
It is an efficient way to find GCD of 2 integers.
It works by continuously computing remainders until 0(zero) is reached. The last non-zero
remainder will be the answer
eg: for 12 and 8, the GCD will be 4
*/

#include<stdio.h>

int gcd(int, int);
int gcdViaTailRecursion(int, int);

int main() {
  int num1, num2;
  printf("Enter the first number\n");
  scanf("%d", &num1);
  printf("Enter the second number\n");
  scanf("%d", &num2);
  printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
  printf("GCD of %d and %d via Tail Recursion is %d\n", num1, num2, gcdViaTailRecursion(num1, num2));
  return 0;
}

/*
Time: O(log(min(m, n)))
Space: O(1)
*/
int gcd(int num1, int num2) {

  while(num2 != 0) {
    int rem = num1 % num2;
    num1 = num2;
    num2 = rem;
  }

  return num1;
}

/*
Time: O(log(min(m, n)))
Space: O(1)
*/
int gcdViaTailRecursion(int num1, int num2) {

  if(num2 == 0) {
    return num1;
  }

  return gcdViaTailRecursion(num2, num1 % num2);
}
