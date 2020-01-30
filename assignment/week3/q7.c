//
// Created by Sky Livingston on 30/1/20.
//

#include <stdio.h>

float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
    int power;
    float number, result = -1;

    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));
    power2(number, power, &result);
    printf("power2(): %.2f\n", result);
    return 0;
}
float power1(float num, int p)
{
    float WorkingValue = num;
    for (int i = p; i > 1; i--){
        WorkingValue = WorkingValue * num;
    }

    for (int i = p; i < 1; i++){
        WorkingValue = WorkingValue / num;
    }
    // addition one divison for original init value of num*1 in numerator

    return p != 0 ? WorkingValue : 1;

}
void power2(float num, int p, float *result)
{
    float WorkingValue = num;
    for (int i = p; i > 1; i--){
        WorkingValue = WorkingValue * num;
    }

    for (int i = p; i < 1; i++){
        WorkingValue = WorkingValue / num;
    }
    // addition one divison for original init value of num*1 in numerator

    *result = p != 0 ? WorkingValue : 1;
}