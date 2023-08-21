#include<iostream>

using namespace std;
int * ptr=NULL;
void fun()
{
    
    int iNo1=10;
    ptr=&iNo1;
}
int main()
{
    //fun();
    //printf("Value of iNo is %d\n",*ptr);

    // int iNo=10;
    // int *Ptr=&iNo;

    // printf("Value of iNo is %d\n",*Ptr);
    // printf("%d\n",iNo);
    // printf("%d\n",&iNo);
    // printf("%d\n",Ptr);
    // printf("%d\n",&Ptr);
    // printf("%d\n",sizeof(iNo));
    // printf("%d\n",sizeof(Ptr));

    int no=21;
    int *p=&no;
    int **q=&p;
    int ***r=&q;
    int ****x=&r;
    int *****y=&x;
    int ******z=&y;

    printf("no-> %d\n",no);
    printf("p-> %d\n",*p);
    printf("q-> %d\n",*q);
    printf("r-> %d\n",**r);
    printf("x-> %d\n",**x);
    printf("y-> %d\n",****y);
    printf("z-> %d\n",****z);


    


    return 0;
}