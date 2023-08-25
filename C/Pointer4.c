#include <stdio.h>
int main()
{
    int Arr[5] = {11, 21, 31, 51, 101};
    int *p = &(Arr[0]);
    int *q = &(Arr[4]);

    printf("%d\n", p);
    printf("%d\n", Arr);

    /*
       Arr 100
       &Arr 100
       Arr[2]  51
       Arr[4]  111
       &Arr[3] 112
       sizeof(Arr)  20
       sizeof(Arr+1) 20
       p   100
       &p  200
       sizeof(p)   8
       *p         11
       q          116
       &q         300
       *q         111
    */

    return 0;
}