/*
In this example we declare an array of some size, populate it from user input and then display the output
In this case once we define the array and compiled it we can't dynamically change the size and also we can't assign elements directly into the array.
*/

#include <stdio.h>

int main(void)
{
    int myArr[10]; // Declaring the array
    int num=0;

    printf("Enter the number you want to add into the array\n");

    for(int i=0; i<10; i++) // Populating our array with data
    {
        printf("Enter the %d number: ", i+1);
        scanf("%d", &num);
        myArr[i] = num;
    }

    for (int i = 0; i < 10; i++) // Printing out the values
    {
        printf("%d ", myArr[i]); // accessing the elements of the array
    }
    
    return 0;
}