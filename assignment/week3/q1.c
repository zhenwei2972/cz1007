#include <stdlib.h>
#include <stdio.h>
//By Brendan
double computePay1(int noOfHours, int payRate);
void computePay2(int noOfHours, int payRate, double *grossPay);
int main()
{
   int noOfHours, payRate;
   double grossPay;

   printf("Enter number of hours: \n");
   scanf("%d", &noOfHours);
   printf("Enter hourly pay rate: \n");
   scanf("%d", &payRate);
   printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));
   computePay2(noOfHours, payRate, &grossPay);
   printf("computePay2(): %.2f\n", grossPay);
   return 0;
}
double computePay1(int noOfHours, int payRate)
{
   /* Write your code here */
   double totalpay;
   if (noOfHours <= 160)
   {
      totalpay = noOfHours * payRate;
   }
   else
   {
      noOfHours = noOfHours - 160;
      totalpay = noOfHours * payRate * 1.5 + 160 * payRate;
   }
   return totalpay;
}
void computePay2(int noOfHours, int payRate, double *grossPay)
{
   /* Write your code here */
   if (noOfHours <= 160)
   {
      *grossPay = noOfHours * payRate;
   }
   else
   {
      noOfHours = noOfHours - 160;
      *grossPay = noOfHours * payRate * 1.5 + 160 * payRate;
   }
}
