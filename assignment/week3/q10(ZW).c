#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
//By Zhen Wei
#define INIT_VALUE 999
/*
Write a function that extracts the even digits from a positive number, and
combines the even digits sequentially into a new number. The new number is returned to the
calling function. If the input number does not contain any even digits, then the function returns -1.
For example, if the input number is 1234567, then 246 will be returned; and if the input number is
13, then �1 will returned. Write the function in two versions. The function extEvenDigits1()
returns the result to the caller, while the function extEvenDigits2() returns the result
through the pointer parameter, result. The function prototypes are given as follows:

*/

//extract even from positive number and combine
//into a new number
int extEvenDigits(int num);
void extEvenDigits2(int num,int *result);
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
    //int len = ((int)log10(num)+1);
    //printf("%d length size \n",len);
    int fullNum =0;
    int finalOutput =0;
    bool hasEven = false;

    while(num!=0)
    {
        int currentDigit =0;
       currentDigit= num % 10;
      if((currentDigit % 2)==0)
      {
          hasEven =true;
          fullNum = fullNum*10 +currentDigit;

      }
      num/=10;
    }
      //reverse the integer again
    while(fullNum!=0)
    {
        int tempDigit = 0;
        //get last digit
        tempDigit = fullNum % 10;
        // add last digit as first digit
        finalOutput =finalOutput*10 + tempDigit;
        fullNum/=10;

    }
    if(hasEven)
        return finalOutput;
    else
        return -1;



    //check for digits
 //if input no even digit , return -1

 //
}
void extEvenDigits2(int num, int *result)
{
 int fullNum =0;
    int finalOutput =0;
    bool hasEven = false;

    while(num!=0)
    {
        int currentDigit =0;
       currentDigit= num % 10;
      if((currentDigit % 2)==0)
      {
          hasEven =true;
          fullNum = fullNum*10 +currentDigit;

      }
      num/=10;
    }
      //reverse the integer again
    while(fullNum!=0)
    {
        int tempDigit = 0;
        //get last digit
        tempDigit = fullNum % 10;
        // add last digit as first digit
        finalOutput =finalOutput*10 + tempDigit;
        fullNum/=10;

    }
    if(hasEven)
        *result = finalOutput;
    else
        *result = -1;
}
