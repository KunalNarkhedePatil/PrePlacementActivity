//inside structure we can create a array
#include<stdio.h>
struct Demo
{
   int no;
   int Arr[3];
   float f;
}obj1={10,20,30,40,90.90};
int main()
{
    struct Demo obj;

    obj.no=200;
    obj.Arr[0]=10;
    obj.Arr[1]=20;
    obj.Arr[2]=30;

    obj.f=20.20f;

    printf("%d\n",obj.no);
    printf("%d\n",obj.Arr[0]);
    printf("%d\n",obj.Arr[1]);
    printf("%d\n",obj.Arr[2]);
    printf("%f\n",obj.f);

    printf("obj1\n");

    printf("%d\n",obj1.no);
    printf("%d\n",obj1.Arr[0]);
    printf("%d\n",obj1.Arr[1]);
    printf("%d\n",obj1.Arr[2]);
    printf("%f\n",obj1.f);


    printf("Size of structure is : %d\n",sizeof(obj));


    return 0;
}