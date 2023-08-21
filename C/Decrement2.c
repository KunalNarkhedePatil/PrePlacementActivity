#include<stdio.h>
//Pre-Decrement
int main()
{
    int i=10;
    int iNo=0;

    iNo=--i;

    printf("%d\n",iNo);  //9
    printf("%d\n",i);    //9
    return 0;
}