#include<stdio.h>
//Pre-Increment
int main()
{
    int i=10;
    int iNo=0;

    iNo=++i;

    printf("%d\n",iNo);  //11
    printf("%d\n",i);    //11
    return 0;
}