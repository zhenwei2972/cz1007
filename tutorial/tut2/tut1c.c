#include <stdio.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);
int main()
{
    int num, digit, result = -1;

    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Enter k position: \n");
    scanf("%d", &digit);
    printf("digitValue1(): %d\n", digitValue1(num, digit));
    digitValue2(num, digit, &result);
    printf("digitValue2(): %d\n", result);
    return 0;
}
int digitValue1(int num, int k)
{
    int result;
    while (k > 0)
    {
        if (k > log10(num) + 1)
        {
            return 0;
        }
        int lastdigit = num % 10;
        int factor = num / 10;
        result = lastdigit;
        num = factor;
        k--;
    }
    return result;
}
void digitValue2(int num, int k, int *result)
{
    while (k > 0)
    {
        if (k > log10(num) + 1)
        {
            *result = 0;
            break;
        }
        int lastdigit = num % 10;
        int factor = num / 10;
        num = factor;
        *result = lastdigit;
        k--;
    }
}