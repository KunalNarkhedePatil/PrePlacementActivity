#include <stdio.h>

int Addition(int iNo1, int iNo2)
{
    int Sum = 0;
    Sum = iNo1 + iNo2;
    return Sum;
}
int main()
{
    int iValue1 = 10;
    int iValue2 = 11;
    int Ans = 0;

    Ans = Addition(iValue1, iValue2);

    printf("Addition is : %d\n", Ans);

    return 0;
}