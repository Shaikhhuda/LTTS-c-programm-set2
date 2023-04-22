// Choice based arithematic

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Choose an arithmetic operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: division by zero.\n");
            }
            else {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
