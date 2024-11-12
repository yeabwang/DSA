/*

In this code we will try to see how a program with exponential big o looks like. These programs for each input we take we are going to have 2^n operations so try to avoid them.

In this program we will be working on something called Fibonacci sequence.

The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones. It typically starts with 0 and 1. So, the sequence looks like this:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
Each term after the first two is the sum of the two previous terms. Mathematically, this can be expressed as:

Base cases: F(0) = 0 and F(1) = 1
Recursive case: F(n) = F(n-1) + F(n-2) for n > 1

Input
For this example, the input is n = 5.

Recursive Call Trace
Let's trace each recursive call to understand how the program computes fibonacci(5).

fibonacci(5) : Calls fibonacci(4) and fibonacci(3)
fibonacci(4): Calls fibonacci(3) and fibonacci(2)
fibonacci(3): Calls fibonacci(2) and fibonacci(1)
fibonacci(2): Calls fibonacci(1) and fibonacci(0)
fibonacci(1) - returns 1 (base case)
fibonacci(0) - returns 0 (base case)

With these base cases resolved, let's substitute the return values back up through the call stack.

Unwinding the Stack
fibonacci(2): returns fibonacci(1) + fibonacci(0) = 1 + 0 = 1
fibonacci(3): returns fibonacci(2) + fibonacci(1) = 1 + 1 = 2
fibonacci(4): returns fibonacci(3) + fibonacci(2) = 2 + 1 = 3
fibonacci(5): returns fibonacci(4) + fibonacci(3) = 3 + 2 = 5

Final Result
After all recursive calls resolve, fibonacci(5) returns 5. 
*/

#include <stdio.h>>

int fibonacci(int num)
{
    if(num<=1)
    {
        return num;
    }

        return fibonacci(num-1) + fibonacci(num-2);
}

int main(void)
{
    int num;
    printf("Enter the number you want to calculate the fibonacci number: ");
    scanf("%d", &num);

    int result = fibonacci(num) ; 

    printf("The fibonacci number of %d is %d", num,result);
    return 0;
}