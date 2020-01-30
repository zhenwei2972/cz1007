#include <stdio.h>
#include <math.h>
#define INIT_VALUE 999
//By Iskandar
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    return 0;
}
int extEvenDigits1(int num)
{
    int result = 0, reversedigit = 0, totaldigit = log10(num) + 1;
    for (int i = 0; i < totaldigit; i++)
    {
        int factor = num / 10;
        int lastdigit = num % 10;
        if (lastdigit % 2 == 0)
        {
            reversedigit = reversedigit * 10 + lastdigit;
        }
        num = factor;
    }
    if (reversedigit == 0)
    {
        return -1;
    }
    //Reverse from 42 > 24 if 1234 is
    while (reversedigit != 0)
    {
        result *= 10;
        result = result + reversedigit % 10;
        reversedigit /= 10;
    }
    return result;
}
void extEvenDigits2(int num, int *result)
{
    *result = 0;
    int reversedigit = 0, totaldigit = log10(num) + 1;
    for (int i = 0; i < totaldigit; i++)
    {
        int factor = num / 10;
        int lastdigit = num % 10;
        if (lastdigit % 2 == 0)
        {
            reversedigit = reversedigit * 10 + lastdigit;
        }
        num = factor;
    }
    if (reversedigit == 0)
    {
        *result = -1;
    }
    //Reverse from 42 > 24 if 1234 is
    while (reversedigit != 0)
    {
        *result *= 10;
        *result = *result + reversedigit % 10;
        reversedigit /= 10;
    }
}
