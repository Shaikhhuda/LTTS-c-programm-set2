//  quadrants of poitns

#include <stdio.h>

int main() {
    double x, y;

    printf("Enter the coordinates (x, y) of a point: ");
    scanf("%lf %lf", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point is in quadrant 1.\n");
    }
    else if (x < 0 && y > 0) {
        printf("The point is in quadrant 2.\n");
    }
    else if (x < 0 && y < 0) {
        printf("The point is in quadrant 3.\n");
    }
    else if (x > 0 && y < 0) {
        printf("The point is in quadrant 4.\n");
    }
    else if (x == 0 && y == 0) {
        printf("The point is at the origin.\n");
    }
    else if (x == 0) {
        printf("The point is on the y-axis.\n");
    }
    else {
        printf("The point is on the x-axis.\n");
    }

    return 0;
}
