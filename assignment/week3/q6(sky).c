//
// Created by Sky Livingston on 30/1/20.
//

#include <stdio.h>
int divide1(int m, int n, int *r);
void divide2(int m, int n, int *q, int *r);
int main()
{
    int m, n, q, r;

    printf("Enter two numbers (m and n): \n");
    scanf("%d %d", &m, &n);
    q = divide1(m, n, &r);
    printf("divide1(): quotient %d remainder %d\n", q, r);
    divide2(m, n, &q, &r);
    printf("divide2(): quotient %d remainder %d\n", q, r);
    return 0;
}
int divide1(int m, int n, int *r)
{
    int nCount = 0;
    while (m > 0) {
        m -= n;
        nCount++;
    }
    *r = n + m;
    return m < 0 ? nCount - 1 : nCount ;

}
void divide2(int m, int n, int *q, int *r)
{
    int nCount = 0;
    while (m > 0) {
        m -= n;
        nCount++;
    }
    *r = n + m;
    *q = m < 0 ? nCount - 1 : nCount ;

}