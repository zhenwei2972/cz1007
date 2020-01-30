//
// Created by Sky Livingston on 30/1/20.
//

#include <stdio.h>
#include <stdbool.h>

int allEvenDigits1(int num);
void allEvenDigits2(int num, int *result);
bool isOdd(int number);

int main()
{
    int number, p=999, result=999;
    printf("Enter a number: \n"); scanf("%d", &number);

    p = allEvenDigits1(number);
    if (p == 1)
        printf("allEvenDigits1(): yes\n");
    else if (p == 0)
        printf("allEvenDigits1(): no\n");
    else
        printf("allEvenDigits1(): error\n");

    allEvenDigits2(number, &result);
    if (result == 1)
        printf("allEvenDigits2(): yes\n");
    else if (result == 0)
        printf("allEvenDigits2(): no\n");
    else
        printf("allEvenDigits2(): error\n");
    return 0;
}
int allEvenDigits1(int num)
{
    int EvenCount = 0;
    do{
        if (isOdd(num % 10 )){
            return 0;
        }
        num = num / 10;

    }while(num % 10 != 0);
    return 1;
}
void allEvenDigits2(int num, int *result)
{
    int EvenCount = 0;
    *result = 1;
    do{
        if (isOdd(num % 10 )){
            *result = 0;
        }
        num = num / 10;

    }while(num % 10 != 0);
}

bool isOdd(int number)
{
    return number % 2;
}
