#include<stdio.h>

int reverse(int, int);

int main(){
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);
  printf("After reversing %d --> %d\n", num, reverse(num, 0));
  return 0;
}

/*
Time: O(log n)
Space: O(1)
*/
int reverse(int num, int rev) {

  if(num == 0) {
    return rev;
  }

  return reverse(num / 10, (rev * 10) + (num % 10));
}
