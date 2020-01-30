#include <stdio.h>
#include <math.h>

int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);
int main()
{
    int num, result;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
    sumSqDigits2(num, &result);
    printf("sumSqDigits2(): %d\n", result);
    return 0;
}
int sumSqDigits1(int num)
{
    int result;
    int count = log10(num) + 1;
    while (count > 0)
    {
        int lastdigit = num % 10;
        int factor = num / 10;
        result += pow(lastdigit,2);
        num = factor;
        count--;
    }
    return result;
}
void sumSqDigits2(int num, int *result)
{
    *result = 0;
    int count = log10(num) + 1;
    while (count > 0)
    {
        int lastdigit = num % 10;
        int factor = num / 10;
        *result = *result + pow(lastdigit,2);
        num = factor;
        count--;
    }
}