//we can create array of obj structure
#include<stdio.h>

struct Demo
{
    int iNo;
    float fNo;
}obj1[2]={11,11.11,22,22.22};
int main()
{
    struct Demo obj[2];

   // obj is one dimentional array which contain 2 element each element of type struct demo

    obj[0].iNo=10;
    obj[0].fNo=20.20f;

    obj[1].iNo=20;
    obj[1].fNo=40.40f;

    printf("%d\n",obj[0].iNo);
    printf("%f\n",obj[0].fNo);
    printf("%d\n",obj[1].iNo);
    printf("%f\n",obj[1].fNo);


    printf("obj1\n");

    printf("%d\n",obj1[0].iNo);
    printf("%f\n",obj1[0].fNo);
    printf("%d\n",obj1[1].iNo);
    printf("%f\n",obj1[1].fNo);

    printf("Size of structure is :%d\n",sizeof(obj));
    return 0;
}