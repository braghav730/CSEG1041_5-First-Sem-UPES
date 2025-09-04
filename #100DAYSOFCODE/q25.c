//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Modulo by zero is undefined.\n");
            }
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}