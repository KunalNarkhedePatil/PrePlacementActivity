#include<stdio.h>
struct Demo
{
    int iNo;
    float fNo;
}obj1={10,20.20};  //memeber initialisation list


int main()
{
    struct Demo obj2; 

    obj2.iNo=20;
    obj2.fNo=30.30;

    printf("%d\n",obj1.iNo);
    printf("%d\n",obj2.iNo);

    return 0;
}