//
// Created by Sky Livingston on 30/1/20.
//

#include <stdio.h>

int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);

int main()
{
    int number, result;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("countEvenDigits1(): %d\n", countEvenDigits1(number));
    countEvenDigits2(number, &result);
    printf("countEvenDigits2(): %d\n", result);
    return 0;
}
int countEvenDigits1(int number)
{
    int EvenCount = 0;
    int totaldigit = log10(number) + 1;
    for (int i = 0; i < totaldigit; i++)
    {
        if (number % 2 == 0) EvenCount++;

        number /= 10;
    }
    return EvenCount;
}
void countEvenDigits2(int number, int *count)
{
    *count = 0;
    int totaldigit = log10(number) + 1;
    for (int i = 0; i < totaldigit; i++)
    {
        if (number % 2 == 0) *count += 1;
        number /= 10;
    }
}
