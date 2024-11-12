/*
In this code we will try to see how a program with quadratic big o notation looks like. This means for every n input we have we are going to do n^2 actions.

These things usually happen when we have a nested loop which requires in each iteration we will have another iteration.
Bubble sort for example

In this example,

1. We defined our array and our variables, since its a one time task the complexity of this task will be O(1).
2. In our bubble sort function what we are doing is we are selecting an element from our array and comparing it with the next array with the aim of keeping the smallest element in left side.
3. If the selected element is greater than the next element we will swap those two elements. So in this process for each input we have two iteration that first selects an i and compares it with the entire array each single time so thats why is O(n^2)

*/


#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void)
{
    int unsortedArray [] ={1,4,2,7,5,8,3,6};
    int size = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

    bubbleSort(unsortedArray,size);

    printf("The sorted array :");
    for(int i=0; i<size; i++)
    {
        printf("%d ", unsortedArray[i]);
    }
    return 0;
}
