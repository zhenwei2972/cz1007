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
    int sum = 0, p, i;
    for (i = 1; i <= num; i++)
    {
        p = 1;
        while (p <= (i / 2))
        {
            if (i % p == 0)
                sum = sum + p;
            p++;
        }
        if (sum == i)
        {
            printf("Perfect numbers: %d \n", i);
            result *= i;
        }
        sum = 0;
    }
    return result;
}
void perfectProd2(int num, int *prod)
{
    *prod = 1;
    int sum = 0, p, i;
    for (i = 1; i <= num; i++)
    {
        p = 1;
        while (p <= (i / 2))
        {
            if (i % p == 0)
                sum = sum + p;
            p++;
        }
        if (sum == i)
        {
            printf("Perfect numbers: %d \n", i);
            *prod *= i;
        }
        sum = 0;
    }
}
