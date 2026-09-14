#include <stdio.h>

int main() {
    int a,b,Result;
    char op;
    
    printf("ENTER ANY NUMBER : ");
    scanf("%d", &a);
    printf("ENTER ANY OPERATOR : ") ;
    scanf(" %c", &op);
    printf("ENTER ANY NUMBER : ");
    scanf("%d", &b);
    
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

