/*
In this program we will create a small calculator that do arithmetic operations (Addition, Subtraction, Multiplication, Division)

We will have four functions to do our four operations and then one additional function called operation and this operation functions will call back the actual operation functions

Then we will accept two numbers from the user with the operation they want to do and we will calculate based on that

*/

#include <stdio.h>

int operation(int firstNum, int secondNum, int (*Operation)(int, int)) {
    printf("The result is %d\n", Operation(firstNum, secondNum));
}

int add(int firstNum, int secondNum) {
    return firstNum + secondNum;
}

int sub(int firstNum, int secondNum) {
    return firstNum - secondNum;
}

int mult(int firstNum, int secondNum) {
    return firstNum * secondNum;
}

int div(int firstNum, int secondNum) {
    if (secondNum == 0) {
        printf("Error! Division by zero.\n");
        return -1;  // Return 0 to indicate an error
    }
    return firstNum / secondNum;
}

int main(void) {
    int num1 = 0, num2 = 0, choice = 0;

    do {
        printf("Which operation do you want to perform?\n");
        printf("1. Add\n2. Sub\n3. Mult\n4. Div\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Good Bye!\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice) {
        case 1:
            operation(num1, num2, add);
            break;
        case 2:
            operation(num1, num2, sub);
            break;
        case 3:
            operation(num1, num2, mult);
            break;
        case 4:
            operation(num1, num2, div);
            break;
        default:
            printf("Unknown input. Please try again.\n");
            break;
        }
    } while (choice != 5);

    return 0;
}
