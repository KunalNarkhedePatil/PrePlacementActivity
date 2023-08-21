#include<stdio.h>

int main()
{
    int Arr[6]={10,20,30};
    printf("Size of arr %d\n",sizeof(Arr));
    //int Brr[];
    int Brr[4];
    Brr[0]=10;
    Brr[1]=20;

    for(int i=0;i<4;i++)
    {
        printf("%d ",Brr[i]);
    }
    printf("\n");

    printf("Data\n");
    for(int i=0;i<6;i++)
    {
        printf("%d\n",Arr+i);
    }
    printf("Address of arr %d ",Arr);
    printf("Address\n");

    for(int i=0;i<6;i++)
    {
        printf("%d ",&Arr[i]);
    }
    return 0;
}