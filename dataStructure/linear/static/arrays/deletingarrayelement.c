/*

In this example we will try to see how to delete elements from an array in c.

*/

#include <stdio.h>

void deleting(int arr[], int *size, int position)
{
    if (position < 0 || position >= *size)
    {
        printf("Invalid input\n");
        return; // Exit the function if the position is invalid
    }

    int deletedValue = arr[position-1]; // Store the value being deleted

    // Shift elements left from the specified position
    for (int i = position-1; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*size)--; // Decrease the size

    printf("The value %d stored at position %d is deleted. The new array is:\n", deletedValue, position);
}

int main(void)
{
    int myArr[] = {1, 3, 4, 5, 6, 7, 0, 10};
    int size = sizeof(myArr) / sizeof(myArr[0]);
    int index = 0;

    // Display the original array
    for (int i = 0; i < size; i++)
    {
        printf("The %d element is %d\n", i + 1, myArr[i]);
    }

    printf("Enter the position of the element you want to remove: ");
    scanf("%d", &index);

    deleting(myArr, &size, index);

    // Display the updated array
    for (int i = 0; i < size; i++)
    {
        printf("The %d element is %d\n", i + 1, myArr[i]);
    }

    return 0;
}
