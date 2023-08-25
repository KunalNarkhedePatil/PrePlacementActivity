#include<stdio.h>

struct Demo
{
    int iNo;
    float fNo;
}obj[2];
int main()
{
    //struct Demo obj[2];

    obj[0].iNo=10;
    obj[0].fNo=20.20f;

    obj[1].iNo=20;
    obj[1].fNo=40.40f;

    printf("%d\n",obj[0].iNo);
    printf("%f\n",obj[0].fNo);
    printf("%d\n",obj[1].iNo);
    printf("%f\n",obj[1].fNo);

    printf("Size of structure is :%d\n",sizeof(obj));
    return 0;
}