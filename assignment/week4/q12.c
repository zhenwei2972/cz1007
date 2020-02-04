#include <stdio.h>
#define SIZE 10
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);
int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i, j, min;

    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i = 0; i < rowSize; i++)
        for (j = 0; j < colSize; j++)
            scanf("%d", &ar[i][j]);
    min = minOfMax2D(ar, rowSize, colSize);
    printf("minOfMax2D(): %d\n", min);
    return 0;
}
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize)
{
    int maxvalue [rowSize], max = ar[0][0];
    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            if(ar[i][j] > max) max = ar[i][j];
        }
        maxvalue[i] = max;
    }
    int result = maxvalue[0];
    for(int i = 0; i < rowSize; i++){
        if(maxvalue[i] < result){
            result = maxvalue[i];
        }
    }
    return result;   
}