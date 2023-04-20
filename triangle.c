// Find the types of a triangle.

#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a + b > c && a + c > b && b + a > c)
    {
        if (a == b && b == c)
        {
            printf("Equilateral triangle");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Isosceles triangle");
        }
        else
        {
            printf("Scalene triangle");
        } 
    }
    else
    {
        printf("Not a traingle");
    }

    return 0;
    
}