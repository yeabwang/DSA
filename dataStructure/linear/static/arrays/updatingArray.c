/*

To update the elements of an array we can select the place we want to update and then we can assign a new value to it.

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
    printf("The current value stored at %d is %d: Please enter the new value: ", index, myArr[index-1]);
    scanf("%d", &newValue);
    myArr[index-1] = newValue; // updating the value of our array
    
    for(int i=0; i<size; i++)
    {
        printf("The %d element is %d\n", i+1, myArr[i]);
    }

    return 0;
}