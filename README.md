# Tail-Recursion-Programs

[Programs (Tail-Recursive)](https://github.com/Akshaya-Amar/Tail-Recursion-Programs#programs)

𝗡𝗼𝗻-𝘁𝗮𝗶𝗹 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻 𝘁𝗼 𝗧𝗮𝗶𝗹 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻 will lead from slower execution **to faster execution and** O(n) space **to O(1) space**

𝗥𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻 𝗶𝘀 𝘀𝗹𝗼𝘄 because of the 𝘁𝗶𝗺𝗲 𝘀𝗽𝗲𝗻𝘁 𝗶𝗻 𝗽𝘂𝘀𝗵𝗶𝗻𝗴 𝗮𝗻𝗱 𝗽𝗼𝗽𝗽𝗶𝗻𝗴 𝘁𝗵𝗲 𝗮𝗰𝘁𝗶𝘃𝗮𝘁𝗶𝗼𝗻 𝗿𝗲𝗰𝗼𝗿𝗱𝘀 on and from the stack for each recursive call and 𝗲𝘅𝗽𝗲𝗻𝘀𝗶𝘃𝗲 𝗶𝗻 𝘁𝗲𝗿𝗺𝘀 𝗼𝗳 𝗺𝗲𝗺𝗼𝗿𝘆 as well because 𝗶𝘁 𝗿𝗲𝗾𝘂𝗶𝗿𝗲𝘀 𝘀𝗽𝗮𝗰𝗲 𝗶𝗻 𝘁𝗵𝗲 𝘀𝘁𝗮𝗰𝗸 𝘁𝗼 𝘀𝘁𝗼𝗿𝗲 𝘁𝗵𝗲 𝗮𝗰𝘁𝗶𝘃𝗮𝘁𝗶𝗼𝗻 𝗿𝗲𝗰𝗼𝗿𝗱𝘀 for each recursive call and 𝗶𝗳 𝘁𝗵𝗲 𝘀𝘁𝗮𝗰𝗸 𝗶𝘀 𝘁𝗼𝗼 𝗱𝗲𝗲𝗽, 𝘁𝗵𝗲𝗻 𝘀𝘁𝗮𝗰𝗸 𝗺𝗮𝘆 𝗼𝘃𝗲𝗿𝗳𝗹𝗼𝘄 𝘁𝗼𝗼.

This can be improved by making recursive program as tail recursive 𝗮𝘀 𝗶𝘁 𝗱𝗼𝗲𝘀𝗻'𝘁 𝗶𝗻𝘃𝗼𝗹𝘃𝗲𝘀 𝘁𝗵𝗲 𝗽𝘂𝘀𝗵𝗶𝗻𝗴 𝗮𝗻𝗱 𝗽𝗼𝗽𝗽𝗶𝗻𝗴 𝗼𝗽𝗲𝗿𝗮𝘁𝗶𝗼𝗻𝘀, 𝗿𝗮𝘁𝗵𝗲𝗿 𝘁𝗵𝗲 𝗽𝗿𝗲𝘃𝗶𝗼𝘂𝘀 𝗮𝗰𝘁𝗶𝘃𝗮𝘁𝗶𝗼𝗻 𝗿𝗲𝗰𝗼𝗿𝗱 𝗴𝗲𝘁𝘀 𝗼𝘃𝗲𝗿𝘄𝗿𝗶𝘁𝘁𝗲𝗻 𝗯𝘆 𝘁𝗵𝗲 𝗰𝘂𝗿𝗿𝗲𝗻𝘁 𝗮𝗰𝘁𝗶𝘃𝗮𝘁𝗶𝗼𝗻 𝗿𝗲𝗰𝗼𝗿𝗱 when a recursive call occurs, while retaining the original return address. So, at a time we have only one activation record on the stack and that too for the currently executing recursive call. So, it doesn't matter that how deep the recursion is, 𝘁𝗵𝗲 𝘀𝗽𝗮𝗰𝗲 𝗿𝗲𝗾𝘂𝗶𝗿𝗲𝗺𝗲𝗻𝘁 𝘄𝗶𝗹𝗹 𝗮𝗹𝘄𝗮𝘆𝘀 𝗯𝗲 𝗰𝗼𝗻𝘀𝘁𝗮𝗻𝘁 𝗮𝗻𝗱 𝗶𝗺𝗽𝗿𝗼𝘃𝗲𝘀 𝘁𝗵𝗲 𝗼𝘃𝗲𝗿𝗮𝗹𝗹 𝗽𝗲𝗿𝗳𝗼𝗿𝗺𝗮𝗻𝗰𝗲 by reducing the time and space/memory requirements.

𝗡𝗼𝗻-𝘁𝗮𝗶𝗹 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻
A recursive call is said to be non-tail recursive if it is not the last statement to be executed inside a function or that call is a part of expression.<br>
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


𝗧𝗮𝗶𝗹 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻<br>
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

To find factorial of 5 using tail recursion<br>
**fact(5, 1)**<br>
**fact(4, 5)**<br>
**fact(3, 20)**<br>
**fact(2, 60)**<br>
**fact(1, 120)**<br>
**120**<br>

In tail recursive function, no pending operations are left after making a recursive call. So, no need to store the record of the previous state i.e. no need to push a new activation record for each recursive call in the stack. Here, we are performaing running multiplication using the auxiliary variable(res) on the fly as we move along instead of waiting till the end and doing multiplication backwards. So, nothing to remember and therefore no need to store activiation record for each recursive call which results in faster performance and will be space efficient as well.

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

Here, I tried to throw an exception in a tail recursive function and **we can see all the recursive calls in the stack trace** and it can clearly be seen that Java doesn't support tail recursion and **according to Brian Goetz(Java Language Architect @ Oracle) there are number of security sensitive methods in JDK which rely on counting stack frames between JDK library code and calling code to figue out who's calling them.**

**Reference:**
Data Structures through C in Depth by S.K.Srivastava/Deepali Srivastava<br>
https://stackoverflow.com/questions/33923/what-is-tail-recursion<br>
https://softwareengineering.stackexchange.com/questions/272061/why-doesnt-java-have-optimization-for-tail-recursion-at-all<br>


## Programs
| # | Title | Complexity |
|:---:| ----- | :--------: |
|1.|[Factorial Of Number](./FactorialOfNumber.c) | Time - **O(n)** <br>Space - **O(1)** |
|2.|[Number of Digits In a Number](./NumberOfDigitsInANumber.c) | Time - **O(log<sub>2</sub>(n))** <br>Space - **O(1)** |
|3.|[Number Of Even Elements In Array](./NumberOfEvenElementsInArray.c) | Time - **O(n)** <br>Space - **O(1)** |
|4.|[Reverse Integer](./ReverseInteger.c) | Time - **O(log<sub>2</sub>(n))** <br>Space - **O(1)** |
|5.|[Sum Of Digits](./SumOfDigits.c) | Time - **O(log<sub>2</sub>(n))** <br>Space - **O(1)** |
|6.|[Sum Of Elements In Array](./SumOfElementsInArray.c) | Time - **O(n)** <br>Space - **O(1)** |

**Will keep updating with more programs.**
