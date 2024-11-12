/*

This code tries to show how a program wih constant Big O Notation looks like.
Constant Big O Notation means when the number of input increases the number of operations to be done stays consistent.

The aim of this program is to accept input from the user and give back the square of that number.

In this program we mainly have  processes

1. Array Initialization - Independent of the size of the array or the number of elements stored in the array we do this operation only one time. So it has O(1) complexity.
2. Accepting input - This process also happens ones giving us O(1). 
3. Accessing the array elements - Regardless of our big or small our array is we only access the array with index one time giving su O(1).
4. Multiplication(Arithmetic Operation) - This proccess also happens one time only. So again O(1).
5. Finally, we out put the result to the terminal.

In this code our operation is 5 so O(5), but since we ignore constants we will just say O(1).

*/

#include <stdio.h>


int main(void)
{
    int num [] ={1,2,3,4,5,6,7,8,9};
    int index = 0;
    int square;

    printf("Enter the number you want to square(1-9): ");
    scanf("%d",&index);

    square = num[index-1] * num[index-1];
    printf("The square of %d is %d.", index,square);
    return 0;
}

