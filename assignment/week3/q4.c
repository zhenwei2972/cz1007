//
// Created by Sky Livingston on 30/1/20.
//

#include <stdio.h>
#include <stdbool.h>

int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);
bool isOdd(int number);

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
    do{
        if (!isOdd(number % 10 )){
            EvenCount++;
        }
        number = number / 10;

    }while(number % 10 != 0);
    return EvenCount;

}
void countEvenDigits2(int number, int *count)
{
    int EvenCount = 0;
    do{
        if (!isOdd(number % 10 )){
            EvenCount++;
        }
        number = number / 10;

    }while(number % 10 != 0);
    *count = EvenCount;
}

bool isOdd(int number)
{
    return number % 2;
}
*/