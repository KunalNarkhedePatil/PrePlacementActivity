#include <stdio.h>

int main()
{
    //swatachya gharatil fan ch batan band karan
    int iStandard = 0;
    
    printf("Primary school portal\n");
    printf("Enter the Division\n");
    
    scanf("%d", &iStandard);

    switch (iStandard)
    {
    case 1:
        printf("Your exam is at 1 PM\n");
        break;
    case 2:
        printf("Your exam is at 2 PM\n");
        break;
    case 3:
        printf("Your exam is at 3 PM\n");
        break;
    case 4:
        printf("Your exam is at 4 PM\n");
        break;
    default:
        printf("Invalid Standard\n");
    }
    return 0;
}