#include <stdio.h>

int main()
{
    int iNo=0;

    printf("Enter the number\n");
    scanf("%d",&iNo);
    
    int iCnt = 1;

    while (iCnt <= iNo) // jo paryant 5 kivva to 5 peksha lahan asel paryant
    {
        printf("Jay Ganesh....\n");
        iCnt++;
    }
    return 0;
}