/*
Palindrome number is the one which remains the same when it's digits are reversed
eg:
12321 - palindrome number
12323 - not a palindrome number
*/

#include<stdio.h>

int isPalindrome(int, int);

int main(){

  int num;
  printf("Enter a number\n");
  scanf("%d", &num);

  if(isPalindrome(num, 0)) {
    printf("%d is a palindrome number\n", num);
  } else {
    printf("%d is not a palindrome number\n", num);
  }

  // one liner using ternary/conditional operator
  // printf("%d is %s palindrome number\n", num, isPalindrome(num, 0) ? "a" : "not a");
  return 0;
}

/*
Time: O(logn)
Space: O(1)
*/
int isPalindrome(int num, int rev) {

  if(num <= rev) {
    return (rev == num) || (rev / 10 == num);
  }

  return isPalindrome(num / 10, (rev * 10) + (num % 10));
}
/*
(rev / 10 == num) is for odd number of digits.
eg: num = 45654, now the recursive call will terminate when num < rev
i.e. num = 45 and rev = 456, so to truncate the 6 of rev, we use rev / 10 == num.
But this is not required in the case of even number of digits.
Suppose number is 456654, here the recursive call will terminate when num == rev
i.e. x = 456 and rev = 456, so no need to truncate anything here & we can use (rev == num) directly.
*/
