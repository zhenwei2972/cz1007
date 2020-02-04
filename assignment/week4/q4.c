#include <stdio.h>
#include <math.h>
//By Iskandar
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
    int a[20], i, size = 0, num;

    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
    *size = 0;
    for (int i = 100; i < num; i++)
    {
        int sum = 0, factor = i;
        for (int j = 0; j < 3; j++)
        {
            sum += (factor % 10) * (factor % 10) * (factor % 10);
            factor /= 10;
        }
        if (sum == i && *size != 20)
        {
            ar[*size] = i;
            *size += 1;
        }
    }
}