/*

In this example we are going to see how to define an array which will contain a pre-populated data upon creation.
If you define the array with elements populated in it you are not required to give a size but if you do the size has to match the elements in your array. Otherwise, it will be half populated array which is not acceptable in c at all.

*/

#include <stdio.h>

int main(void)
{
    int myArr[] = {1,2,3,4,5,6}; // Creating an array with pre populated elements
    int size = sizeof(myArr) / sizeof(myArr[0]);
    int index=0;
    int newValue=0;

    for(int i=0; i<size; i++)
    {
        printf("The %d element is %d\n", i+1, myArr[i]);
    }

    printf("Enter the index of the element you want to update: ");
    scanf("%d", &index);
    printf("The current value stored at %d is %d: Please enter the new value: ");
    return 0;
}