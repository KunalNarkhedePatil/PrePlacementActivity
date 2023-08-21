#include <stdio.h>

int main()
{
    int iNo = 0;

    printf("Enter the number\n");
    scanf("%d", &iNo);

    int iCnt = 1;
    do
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    } while (iCnt <= iNo);
    return 0;
}