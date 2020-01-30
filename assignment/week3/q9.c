#include <stdio.h>
//By Iskandar and Zhen Wei
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
    int number, result = 0;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("Calling perfectProd1() \n");
    printf("perfectProd1(): %d\n", perfectProd1(number));

    printf("Calling perfectProd2() \n");
    perfectProd2(number, &result);
    printf("perfectProd2(): %d\n", result);
    return 0;
}
int perfectProd1(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
                printf("%d \n",sum);

            }
        }
        if (sum == i)
        {
            result *= i;
            printf("Perfect Number %d \n",i);
        }
    }
    return result;
}
void perfectProd2(int num, int *prod)
{
    *prod = 1;
    for (int i = 1; i <= num; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            *prod *= i;
        }
    }
}
