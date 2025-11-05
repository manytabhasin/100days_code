// Q25: Basic calculator using switch-case for +, -, *, /, %
#include <stdio.h>

int main() {
    int a, b, result;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch(op) {
        case '+': result = a + b; printf("Sum = %d\n", result); break;
        case '-': result = a - b; printf("Difference = %d\n", result); break;
        case '*': result = a * b; printf("Product = %d\n", result); break;
        case '/': 
            if (b != 0) printf("Quotient = %d\n", a / b);
            else printf("Division by zero error!\n");
            break;
        case '%': 
            if (b != 0) printf("Remainder = %d\n", a % b);
            else printf("Modulo by zero error!\n");
            break;
        default: printf("Invalid operator!\n");
    }
    return 0;
}
