#include <stdio.h>

int main() {
    int a = 20;
    int b = 10;
    char op = '+';

    switch (op) {
        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
