# Tail-Recursion-Programs

[Programs (Tail-Recursive)](https://github.com/Akshaya-Amar/Tail-Recursion-Programs#programs)

**Non-tail recursion to Tail recursion** will lead from slower execution **to faster execution and** from O(n) space **to O(1) space**

**Recursion is slow** because of the **time spend in pushing and popping the activation records** on and from the stack for each recursive call and **expensive in terms of memory** as well because **it requires space in the stack to store the activation records** for each recursive call and **if the stack is too deep, then stack may overflow.**

This can be improved by making recursive program as **tail recursive** as **it doesn't involves pushing and popping operations**, rather the previous activation record gets overwrittern by the current activation record when a recursive call occurs, while retaining the original return address. So, at a time we have only one activation record on the stack and that too for the currently executing recursive call. So, it doesn't matter that how deep the recursion is, **the space requirement will always be constant** and **improves the overall performance by reducing the time and space/memory requirements.**

<h1>Non-tail recursion</h1>
A recursive call is said to be non-tail recursive if it is not the last statement to be executed inside a function or that call is a part of expression.

<br>
eg:

```
int fact(int num) {
if(num == 1) {
  return 1;
}
return num * fact(num - 1); // not a tail recursive call as it is a part of expression
}
```

To find factorial of 5 using non-tail recursion<br>
**fact(5)**<br>
**5 * fact(4)**<br>
**5 * (4 * fact(3))**<br>
**5 * (4 * (3 * fact(2)))**<br>
**5 * (4 * (3 * (2 * fact(1))))**<br>
**5 * (4 * (3 * (2 * 1)))**<br>
**5 * (4 * (3 * 2))**<br>
**5 * (4 * 6)**<br>
**5 * 24**<br>
**120**<br>

Non-Tail recursive functions have to finish the pending work after the recursive call finishes, so activation record for each recursive call has to be maintained in the stack. Here, after the recursive call, we still need to remember to multiply later on, in order to get the desired results, and to remember, space is required in order to store the activation record in the stack for each recursive call which will degrade performance and will not be space efficient.


<h1>Tail recursion</h1>
A recursive call is said to be tail recursive if it is the last statement to be executed inside a function and that call is not a part of expression.<br>
eg:

```
int fact(int num, int res){
if(num == 1){
  return res;
}

return fact(num - 1, num * res);  // tail recursive call
}
```

**A recursive function can be converted into a tail recursive function using an auxiliary parameter**(like we have used (res) in our case). The result is accumulated in this parameter and this is done in such a way that there is no pending operation left after the recursive call.

To find factorial of 5 using tail recursion<br>
**fact(5, 1)**<br>
**fact(4, 5)**<br>
**fact(3, 20)**<br>
**fact(2, 60)**<br>
**fact(1, 120)**<br>
**120**<br>

In tail recursive function, since no pending operations are left after making a recursive call so, no need to store the record of the previous state i.e. no need to push a new activation record for each recursive call in the stack. Here, we are performaing running multiplication using the auxiliary variable(res) on the fly as we move along instead of waiting till the end and doing multiplication backwards. So, nothing to remember and therefore no need to store activiation record for each recursive call which results in faster performance and will be space efficient as well.

**Tail recursion is a compile level optimisation**. Some modern compiler can detect tail recursion and perform the optimisation by converting it to iteration to improve performance.

**Java, python don't support tail recursion optimisation while C and C++ do.**

Let's try in Java program whether it's supported or not.

```
class Sample {
  public static void main(String[] args) {
    System.out.println(new Sample().fact(5, 1));
  }

  private int fact(int num, int res) {
    if(num == 1) {
      System.out.println(10 / 0);
      return res;
    }

    return fact(num - 1, res * num);
  }
}
```
```
Exception in thread "main" java.lang.ArithmeticException: / by zero
	at Sample.fact(Sample.java:8)
	at Sample.fact(Sample.java:12)
	at Sample.fact(Sample.java:12)
	at Sample.fact(Sample.java:12)
	at Sample.fact(Sample.java:12)
	at Sample.main(Sample.java:3)
```

Here, I tried to throw an exception in a tail recursive function and **we can see all the recursive calls in the stack trace** and it can clearly be seen that Java doesn't support tail recursion optimization and **according to Brian Goetz(Java Language Architect @ Oracle) there are number of security sensitive methods in JDK which rely on counting stack frames between JDK library code and calling code to figue out who's calling them.**

**References:**<br>
Data Structures through C in Depth by S.K.Srivastava/Deepali Srivastava, <br>
https://stackoverflow.com/questions/33923/what-is-tail-recursion, <br>
https://softwareengineering.stackexchange.com/questions/272061/why-doesnt-java-have-optimization-for-tail-recursion-at-all<br>


## Programs
| # | Title | Complexity |
|:---:| ----- | :--------: |
|1.|[Factorial Of Number](./FactorialOfNumber.c) | Time - **O(n)** <br>Space - **O(1)** |
|2.|[Number of Digits In a Number](./NumberOfDigitsInANumber.c) | Time - **O(log<sub>10</sub>(n))** <br>Space - **O(1)** |
|3.|[Number Of Even Elements In Array](./NumberOfEvenElementsInArray.c) | Time - **O(n)** <br>Space - **O(1)** |
|4.|[Reverse Integer](./ReverseInteger.c) | Time - **O(log<sub>10</sub>(n))** <br>Space - **O(1)** |
|5.|[Sum Of Digits](./SumOfDigits.c) | Time - **O(log<sub>10</sub>(n))** <br>Space - **O(1)** |
|6.|[Sum Of Elements In Array](./SumOfElementsInArray.c) | Time - **O(n)** <br>Space - **O(1)** |

**Will keep updating with more programs.**
