/*
Return the sum of proper divisor.
Proper Divisor of a number is a positive divisor of num which is different from num.
eg:
20 -> 1, 2, 4, 5, 10, but not 20, return their sum(1 + 2 + 4 + 5 + 10 = 22)
55 -> 1, 5, 11, but not 55, return their sum(1 + 5 + 11 = 17)
*/

#include<stdio.h>

int getSumOfProperDiv(int, int);
int getSumOfProperDivViaTailRecursion(int, int, int);

int main(){
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);
  printf("%d\n", getSumOfProperDiv(num, num / 2));
  printf("%d\n", getSumOfProperDivViaTailRecursion(num, num / 2, 0));
  return 0;
}

/*
Time: O(n)
Space: O(n)
*/
int getSumOfProperDiv(int num, int divisor) {

  if(divisor == 1) {
    return 1;
  }

  if(num % divisor == 0) {
    return divisor + getSumOfProperDiv(num, divisor - 1);
  }

  return getSumOfProperDiv(num, divisor - 1);
}

/*
Time: O(n)
Space: O(1)
NOTE: In each invocation of the function, only one recursive call will be executed and that recursive call
will be the last one to be executed inside the function. So, both the recursive calls are tail recursive.
i.e. getSumOfProperDivViaTailRecursion(num, divisor - 1, sum + divisor);
and getSumOfProperDivViaTailRecursion(num, divisor - 1, sum);
both are tail recursive.
*/

int getSumOfProperDivViaTailRecursion(int num, int divisor, int sum) {

  if(divisor == 1) {
    return sum + 1;
  }

  if(num % divisor == 0) {
    return getSumOfProperDivViaTailRecursion(num, divisor - 1, sum + divisor);
  }

  return getSumOfProperDivViaTailRecursion(num, divisor - 1, sum);
}
