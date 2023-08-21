#include<stdio.h>
int Addition(int iNo1,int iNo2)
{
    int Ans=0;
    Ans=iNo1+iNo2;

    return Ans;
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    int Ret=0;

    printf("Enter the first number:\n");
    scanf("%d",&iValue1);

    printf("Enter the second number:\n");
    scanf("%d",&iValue2);

    Ret=Addition(iValue1,iValue2);

    printf("Addition is :%d\n",Ret);

    return 0;
}