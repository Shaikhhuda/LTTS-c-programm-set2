// Calculating energy bill calculation

#include <stdio.h>

int main() {
    int units;
    float rate, bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        rate = 3;
    }
    else if (units <= 200) {
        rate = 5.00;
    }
    else if (units <= 400) {
        rate = 7.00;
    }
    else {
        rate = 10.00;
    }

    bill = units * rate;

    printf("Your energy bill is: Rs. %.2f\n", bill);

    return 0;
}
