/*

Calculate x raised to the power of given n
eg:
2.0 ^ 5 = 32.000000
7.0 ^ 11 =  1977326743.000000
For explanation, refer to the following link
https://leetcode.com/problems/powx-n/discuss/1337794/JAVA-C%2B%2B-%3A-Simple-or-O-log(n)-or-Easy-or-Faster-than-100-or-Explained

*/

#include<stdio.h>

double getPowViaIteration(double, int);
double getPowViaRecursion(double, int);
double getPowViaTailRecursion(double, int, double);

int main() {
  double x = 2.0;
  int n = 5;
  printf("%lf\n", getPowViaIteration(x, n));
  printf("%lf\n", getPowViaRecursion(x, n));
  printf("%lf\n", getPowViaTailRecursion(x, n, 1));
  return 0;
}

/*
Time: O(logn)
Space: O(1)
*/
double getPowViaIteration(double x, int n) {

  double pow = 1;

  while(n != 0) {

    if((n & 1) == 1) { // if((n & 1) == 1) is equivalent to if((n % 2) == 1)
      pow *= x;
    }

    x *= x;
    n >>= 1; // n >>= 1 is equivalent to n /= 2
  }

  return pow;
}

/*
Time: O(logn)
Space: O(logn)
*/
double getPowViaRecursion(double x, int n) {

  if(n == 0) {
    return 1;
  }

  if((n & 1) == 1) { // if((n & 1) == 1) is equivalent to if((n % 2) == 1)
    return x * getPowViaRecursion(x * x, n >> 1); // n >> 1 is equivalent to n / 2
  }

  return getPowViaRecursion(x * x, n >> 1);
}

/*
Time: O(logn)
Space: O(1)
*/
double getPowViaTailRecursion(double x, int n, double pow) {

  if(n == 0) {
    return pow;
  }

  if((n & 1) == 1) { // if((n & 1) == 1) is equivalent to if((n % 2) == 1)
    return getPowViaTailRecursion(x * x, n >> 1, pow * x); // n >> 1 is equivalent to n / 2
  }

  return getPowViaTailRecursion(x * x, n >> 1, pow);
}
