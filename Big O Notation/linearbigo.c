/*
In this example we will try to see how  a program with linear time complexity works.
This means for every n input we add into our data set the number of operation we do increases by n so the entire thing will have n to n relationship.

Now in this example we will see linear search having these process

1. Initialization of our array and variables. Since its a one time process our time complexity for this task is o(1)
2. In our for loop, we grab each element from our array starting from index[0] and compare the value with our target.
3. If we find it in the first check that will be our best case scenario with Big O notation of O(1).
4. If we don't we will d=go to the next index through out our entire array till we find it.

For liner search algorithm we don't have to sort the array,
In best case scenario, where we find the element we are looking for at first search. With big o notation of O(1).
In worst case scenario, where we don't find the element we are looking for or when its at the end which require us to go through the entire dataset. With Big o notation of O(n).
*/

#include <stdio.h>

int linearSearch(int arr[], int size, int target)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main(void)
{
    int dataset [] = {1,4,5,6,7,9,3,10};
    int size = sizeof(dataset) / sizeof(dataset[0]);
    int target = 0;

    printf("Enter the number you want to search: ");
    scanf("%d", &target);

    int result = linearSearch(dataset,size,target);

    if(result >0)
    {
        printf("%d found at index %d", target, result);
    }
    else
    {
        printf("%d is not found in the dataset");
    }
    return 0;
}