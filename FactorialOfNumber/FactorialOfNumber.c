#include<stdio.h>

int fact(int);
int factViaTailRecursion(int, int);

int main(){
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);
  printf("Factorial of %d is: %d\n", num, fact(num));
  printf("Factorial of %d via tail recursion is: %d\n", num, factViaTailRecursion(num, 1));
  return 0;
}

/*
Time: O(n)
Space: O(n)
*/
int fact(int num) {

  if(num == 1) {
    return 1;
  }

  return num * fact(num - 1);
}

/*
Time: O(n)
Space: O(1)
*/
int factViaTailRecursion(int num, int fact) {

  if(num == 1) {
    return fact;
  }

  return factViaTailRecursion(num - 1, num * fact);
}
