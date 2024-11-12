/*

In this code we will try to see how a program with polynomial big o notation looks like. For this example we will be using n^3.
This means for every n input we take on we will have n^3 process to do.
For this example we will be using matrix multiplication with three loops

1. The first loops over the rows.
2. The second loops over the column.
3. The third one select each elements and do the actual operations.

So in this code our process is

1. We initialized the 3 2D arrays, where the first two are dedicated to initializing the arrays needed to be multiplied and the third one is for storing the result of the multiplication
Since the entire process happens one at a time our big o will be O(1).
2. In our multiplication function we are taking one row then looping through each columns of the row and then selecting the elements multiplying them and adding.
This process has 3 process for each input so our big o notation will be n^3.
3. The last will be for each output we will have n^2 output as we are printing each rows and columns.
           
*/

#include <stdio.h>

void matrixMultiplication(int firstArr[][3], int secondArr[][3], int resultantMatrix[][3], int size)
{
    for(int i=0; i<size; i++) // Rows
    {
        for(int j=0; j<size; j++) // columns
        {
            resultantMatrix[i][j] =0;
            
            for(int k=0; k<size; k++)
            {
                resultantMatrix[i][j] += firstArr[i][k] * secondArr[k][j];
            }
        }
    }
}

int main(void)
{
    int firstArr[3][3] ={{1,2,3},{4,5,6},{6,7,8}};
    int secondArr[3][3] = {{9,10,11},{12,13,14},{15,16,17}};
    int resultantMatrix[3][3]; // Place where we store the result of our multiplication


    // our multiplication function
    matrixMultiplication(firstArr,secondArr,resultantMatrix,3);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",resultantMatrix[i][j]);
        }

        printf("\n");
    }
    return 0;
}