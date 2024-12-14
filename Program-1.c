#include <stdio.h>

int main() {
    double a, b, result;
    char operation;

    // Input values
    printf("Enter the first number (a): ");
    scanf("%lf", &a);
    printf("Enter the second number (b): ");
    scanf("%lf", &b);
    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform the operation
    switch (operation) {
        case '+':
            result = a + b;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operation! Please use +, -, *, or /.\n");
    }

    return 0;
}
