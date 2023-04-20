#include<stdio.h>
int main()
{
    int yy;
    printf("Enter a year: ");
    scanf("%d", &yy);

    if ((yy % 4 == 0 && yy % 100 != 0) || yy % 400 == 0)
    {
        printf("%d is a leap year\n", yy);
    }
    else
    {
        printf("%d is not a leap year", yy);
    }

    return 0;
    
}