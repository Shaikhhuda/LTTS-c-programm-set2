// comparison of two biggest numbers

// using if else methode
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a, &b);

    if (a > b)
    {
        printf("%d is bigger than %d", a, b);
    }
    else if (b > a)
    {
        printf("%d is greater than %d", b, a);
    }
    else
    {
        printf("both are equal");
    }
    
    return 0;
    
}

//  comparing to third number
// #include <stdio.h>

// int main() {
//    int a, b, max;

//    printf("Enter two numbers: ");
//    scanf("%d %d", &a, &b);

//    max = a;

//    if (b > max) {
//       max = b;
//    }

//    printf("The maximum number is: %d", max);

//    return 0;
// }
