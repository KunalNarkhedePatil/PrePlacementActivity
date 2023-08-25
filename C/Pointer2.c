#include <stdio.h>

int main()
{
    int no = 11;  // no is a variable of type interger initialised with 11
    int *p = &no; // p is pointer which hold the address of interger and current its holds the address of no

    printf("%d\n",no);  //no
    printf("%d\n",&no);  //100
    printf("%d\n",sizeof(no));  //4
    printf("%d\n",p);  //100
    printf("%d\n",&p); //200
    printf("%d\n",sizeof(p));  //8

    

    return 0;
}