#include <stdio.h>
void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);
int main()
{
    int ar[80];
    int size, i;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i <= size - 1; i++)
        scanf("%d", &ar[i]);
    printReverse1(ar, size);
    printReverse2(ar, size);
    reverseAr1D(ar, size);
    printf("reverseAr1D(): ");
    if (size > 0)
    {
        for (i = 0; i < size; i++)
            printf("%d ", ar[i]);
    }
    return 0;
}
void printReverse1(int ar[], int size)
{
    int i = size - 1;
    printf("printReverse1(): ");
    while (i >= 0)
    {
        printf("%d ", ar[i]);
        i--;
    }
    printf("\n");
}
void printReverse2(int ar[], int size)
{
    int *i = ar + size - 1;
    printf("printReverse2(): ");
    while(i >= ar){
        printf("%d ", *i);
        i--;
    }
     printf("\n");
}
void reverseAr1D(int ar[], int size)
{
    int *first = ar, *last = ar + size - 1;
    for(int i = 0; i < size; i++){
        int temp = *first;
        *first = *last;
        *last = temp;
    }
}