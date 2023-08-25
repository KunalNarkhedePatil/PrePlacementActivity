#include <stdio.h>

struct Demo
{
    int no;
    float f;
    int x;
    float f1;
};
int main()
{
    struct Demo obj;
    //initialise the member of struct using member by member
    obj.no=10;
    obj.f=10.20f;
    obj.x=20;
    obj.f1=20.20f;

    printf("%d\n",obj.no);
    printf("%f\n",obj.f);
    printf("%d\n",obj.x);
    printf("%f\n",obj.f1);

    printf("Size of structure is %d\n",sizeof(obj));


    return 0;
}