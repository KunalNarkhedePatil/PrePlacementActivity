#include <stdio.h>

int main()
{
    // pointer to pointer

    int no = 21;

    int *p = &no;

    int *a = &no;

    int **b = &p;

    int **q = &p;

    int ***r = &q;

    int ****x = &r;

    int *****y = &x;

    /*
    no   11
    &no   100
    sizeof(no)   4
    *p       21
    *p++     22
    &p 200
    **q  21
    *q   100
    &b   400
    sizeof(b)  8
    **r   100
    ***r   21
    x      600
    ***x   100
    *****y  21
    &x     700
    &y    800
    *x    500
    **y   500
    sizeof(y)   8
    sizeof(x)   8
    sizeof(*p)  4
    sizeof(**q) 4
    */

    printf("%d\n", no);
    printf("%d\n", &no);
    printf("%d\n", sizeof(no));
    printf("%d\n", *p);
    printf("%d\n", &p);
    printf("%d\n", **q);
    printf("%d\n", *q);
    printf("%d\n", **b);
    printf("%d\n", &b);
    printf("%d\n", sizeof(b));
    printf("%d\n", **r);
    printf("%d\n", ***r);
    printf("%d\n", x);
    printf("%d\n", ***x);
    printf("%d\n", *****y);
    printf("%d\n", &x);
    printf("%d\n", **y);
    printf("%d\n", sizeof(y));
    printf("%d\n", sizeof(x));
    printf("%d\n", sizeof(*p));
    printf("%d\n", sizeof(**q));
}