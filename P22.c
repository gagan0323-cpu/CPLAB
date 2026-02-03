#include<stdio.h>
int main() {
    float num1, num2, result;
    char op;
    printf("enter an expression (e.g: 5 + 3): ");
    scanf("%f %c %f", &num1, &op, &num2);
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("result = %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("result = %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("result = %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("result = %.2f\n", result);
            } else {
                printf("Error: Division by zero.\n");
                return 0;
            }
            break;
        default:
        printf("invalid operator!\n");

    }
    return 0;
}