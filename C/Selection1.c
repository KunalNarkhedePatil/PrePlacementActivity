#include<stdio.h>

int main()
{
    int No=0;
    int Ans=0;

    printf("Enter the number\n");
    scanf("%d",&No);
    if(No<0)
    {
        No=-No;
    }
    Ans=No%2;

    if(Ans==0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}