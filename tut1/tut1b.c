#include <stdio.h>
int main()
{
    int ccount = 0, dcount = 0;
    char ch;
    printf("Enter your characters (# to end): \n");
    /* Write your program code here */
    scanf("%c", &ch);
    while (ch != '#')
    {
        if (ch >= '0' && ch <= '9')
        {
            dcount++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
                ccount++;
        }
        scanf("%c", &ch);
    }

    printf("The number of digits: %d\n", dcount);
    printf("The number of letters: %d\n", ccount);
    return 0;
}