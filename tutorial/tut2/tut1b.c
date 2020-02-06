#include <stdio.h>
void function0();
void function1(int h, int k);
void function2(int *h, int *k);
int main()
{
    int h, k;
    h = 5;
    k = 15;
    printf("1.h = % d, k = % d\n", h, k); /* line (i) */
    function0();
    printf("2.h = % d, k = % d\n", h, k); /* line (ii) */
    function1(h, k);
    printf("3.h = % d, k = % d\n", h, k); /* line (iii) */
    function2(&h, &k);
    printf("4.h = % d, k = % d\n", h, k); /* line (iv) */
    return 0;
}
void function0()
{
    int h, k;
    h = k = -100;
    printf("5.h = % d, k = % d\n", h, k); /* line (v) */
}
void function1(int h, int k)
{
    printf("6.h = % d, k = % d\n", h, k); /* line (vi) */
    h = k = 100;
    printf("7.h = % d, k = % d\n", h, k); /* line (vii) */
}
void function2(int *h, int *k)
{
    printf("8.h = % d, k = % d\n", *h, *k); /* line (viii) */
    *h = *k = 200;
    printf("9.h = % d, k = % d\n", *h, *k); /* line (ix) */
}