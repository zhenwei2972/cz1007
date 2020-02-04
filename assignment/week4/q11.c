#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
 int data[SIZE][SIZE];
 int i,j;
 int rowSize, colSize;
 printf("Enter the array size (rowSize, colSize): \n");
 scanf("%d %d", &rowSize, &colSize);
 printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
 for (i=0; i<rowSize; i++)
 for (j=0; j<colSize; j++)
 scanf("%d", &data[i][j]);
 printf("compress2D(): \n");
 compress2D(data, rowSize, colSize);
 return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int pre,count;
    int i,j;
    for (i=0;i<rowSize;i++){
        count = 1;
        for(j=0;j<colSize;j++){
            if(pre == data[i][j]) {
                count++;
            }
            else{
                pre = data[i][j];
                count = 1;
            }
            printf("i: %d, j: %d | ", i,j);
            printf("pre :%d  count :%d\n",pre,count);
        }
    }
}