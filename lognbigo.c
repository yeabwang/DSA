/*
In this code we will try to see how a program with log(n) works. This means as the number of inputs we have increase the number of operations we are doing grows by log(n), which is slowly.

In this example we are going to see how binary search works. In Binary search, in operation we are doing we are halving the entire set of inputs we are processing.
For Binary search to work first we have to have a sorted array either in descending or ascending fashion.

In this example what we wil do is

1. Initialize our data set. This operation happens only once so our Big O notation will be o(1).
2. Calculate the number of elements in the array. We do this by dividing the entire size of our array by the size of single element. This process happens only once so our Big O will be O(1).
3. We accept our target from the user so this will be one time process as well so O(1).
4. Next we start from the middle index and check if the target is found in the middle index. If found, our best case scenario we will return our index since we found it the entire process will be o(1).
5. If not we compare the mid element with the target and the target is less than the mid we know that it will not be found in elements greater than the mid element so we will ignore all elements on the right side.
6. If the target is greater than the mid, we ignore the elements in the left side since they won't be applicable.
7. If we went through all elements and couldn't find it, we will return our error index.

- In either ways we are halving our dataset which will greatly reduce the number of operations we do.
- So in Best case scenario it will be O(1) and in the worst case it will be O(log n).

*/

#include <stdio.h>

int search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (end >= start)
    {
        int mid = start + (end - start) / 2;  

        if (arr[mid] == target)
        {
            return mid;  // Target found
        }

        if (arr[mid] < target)
        {
            start = mid + 1;  // Search in the right half
        }

        if (arr[mid] > target)
        {
            end = mid - 1;  // Search in the left half
        }
    }
    return -1;  // Target not found
}

int main(void)
{
    int dataset[] = {1, 3, 5, 6, 7, 20, 30, 50};  // Sorted array
    int size = sizeof(dataset) / sizeof(dataset[0]);
    int target;

    printf("Enter the number you would like to search: ");
    scanf("%d", &target);

    int index = search(dataset, size, target);

    if (index >= 0)  // Check for valid index
    {
        printf("%d is found in the array at index %d.\n", target, index);
    }
    else
    {
        printf("%d is not found in the array.\n", target);
    }

    return 0;
}
