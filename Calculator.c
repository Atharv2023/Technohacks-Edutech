#include <stdio.h>

int main() {
    char operator;
    int a, b, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    switch (operator) {
        case '+':
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
            break;
        case '-':
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
            break;
        case '*':
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result: %d / %d = %d\n", a, b, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}