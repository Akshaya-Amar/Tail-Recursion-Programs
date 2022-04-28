/*
Return the sum of First N Natural Numbers
eg:
num = 5,
1 + 2 + 3 + 4 + 5 --> 15 (here, 15 is the sum of first 5 natural numbers)
*/
#include<stdio.h>

int sumOfFirstNnumbers(int);
int sumOfFirstNnumbersViaTailRecursion(int, int);

int main(){
  int num;
  printf("Enter number\n");
  scanf("%d", &num);
  printf("Sum of first N natural numbers is %d\n", sumOfFirstNnumbers(num));
  printf("Sum of first N natural numbers via Tail Recursion is %d\n", sumOfFirstNnumbersViaTailRecursion(num, 0));
  return 0;
}

/*
Time: O(n)
Space: O(n)
*/
int sumOfFirstNnumbers(int num) {

  if(num == 1) {
    return 1;
  }

  return num + sumOfFirstNnumbers(num - 1);
}

/*
Time: O(n)
Space: O(1)
*/
int sumOfFirstNnumbersViaTailRecursion(int num, int sum) {

  if(num == 0) {
    return sum;
  }

  return sumOfFirstNnumbersViaTailRecursion(num - 1, sum + num);
}
