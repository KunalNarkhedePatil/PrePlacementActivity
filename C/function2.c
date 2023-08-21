// Header file for printf and scanf function

#include <stdio.h>

// Entry point function from where execution start
int main()
{
    int iValue1 = 10;
    int iValue2 = 11;
    int Ans = 0;

    Ans = iValue1 + iValue2;

    printf("%d", &Ans);

    return 0; // return 0 to OS which indicates success
}