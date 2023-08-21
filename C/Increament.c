#include<stdio.h>
//Post-Increment
int main()
{
    int i=10;
    int iNo=0;

    iNo=i++;

    printf("%d\n",iNo);  //10
    printf("%d\n",i);    //11
    return 0;
}