#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
    int data[SIZE][SIZE];
    int i, j;
    int rowSize, colSize;
    printf("Enter the array size (rowSize, colSize): \n");
    scanf("%d %d", &rowSize, &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i = 0; i < rowSize; i++)
        for (j = 0; j < colSize; j++)
            scanf("%d", &data[i][j]);
    printf("compress2D(): \n");
    compress2D(data, rowSize, colSize);
    return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int pre, count;
    for (int i = 0; i < rowSize; i++)
    {
        pre = 2;
        count = 1;
        for (int j = 0; j < colSize; j++)
        {
            if (pre == data[i][j])
                count++;
            else
            {
                if (j != 0)
                {
                    printf("%d %d ", pre, count);
                }
                pre = data[i][j];
                count = 1;
            }
        }
        printf("%d %d ", pre, count);
        printf("\n");
    }
}