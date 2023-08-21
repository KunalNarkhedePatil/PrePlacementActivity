#include <stdio.h>

int main()
{
    //dusaryachya gharatil fan ch batan band karan
    int iStandard = 0;

    printf("Primary school portal\n");

    printf("Enter the Division\n");
    scanf("%d", &iStandard);
    //payari example
    if (iStandard == 1)
    {
        printf("Your exam is at 1 pm\n");
    }
    else if (iStandard == 2)
    {
        printf("Your exam is at 2 pm\n");
    }
    else if (iStandard == 3)
    {
        printf("Your exam is at 3 pm\n");
    }
    else if (iStandard == 4)
    {
        printf("Your exam is at 4 pm\n");
    }
    else
    {
        printf("Invalid Standard\n");
    }

    return 0;
}