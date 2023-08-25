//we can create pointer inside structure

#include<stdio.h>

struct Demo
{
    int *ptr;   //8
    int iNo;    //4
    float fNo;  //4
};

int main()
{
    struct Demo obj; //obj   
    int num=10;
    obj.ptr=&num;
    obj.iNo=20;
    obj.fNo=20.30f;
    printf("%d\n",obj.ptr);  //address
    printf("%d\n",(*obj.ptr));   //10
    printf("%d\n",obj.iNo);      //20
    printf("%f\n",obj.fNo);      //20.30


    printf("Size of structure is %d\n",sizeof(obj));   //16


    return 0;
}