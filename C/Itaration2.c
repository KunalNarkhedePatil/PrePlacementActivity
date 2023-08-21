#include <stdio.h>  //header file

int main()  //entry point function
{
    int iNo = 0;
    printf("Enter the number\n");
    scanf("%d", &iNo);

    //         1       2       3
    for (int i = 1; i <= iNo; i++)
    {
        printf("Jay Ganesh...\n"); // 4
    }
    return 0;    //0 indicates success to OS
}