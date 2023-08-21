#include<stdio.h>

int main()
{
    int X=10;
    const int Y=12;

    printf("%d %d\n",X,Y);

    X=15;
    //Y=20;

    printf("%d %d\n",X,Y);

    X++;
    //Y++;

    printf("%d %d\n",X,Y);
    return 0;
}