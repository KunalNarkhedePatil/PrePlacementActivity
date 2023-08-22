#include<stdio.h>

int main()
{
    int i=10;
    signed int j=10;
    signed int k=-20;

    //i,j,k store positive or negative value

    unsigned int a=40;

    //a only store only positive value;
    unsigned int b=-40;  //not allow

    printf("i=%d\n",i);
    printf("j=%d\n",j);
    printf("k=%d\n",k);
    printf("a=%d\n",a);

    return 0;
}