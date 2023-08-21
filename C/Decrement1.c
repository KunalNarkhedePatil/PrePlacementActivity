#include<stdio.h>
//Post-Decrement
int main()
{
    int i=10;
    int iNo=0;

    iNo=i--;

    printf("%d\n",iNo);  //10
    printf("%d\n",i);    //9
    return 0;
}