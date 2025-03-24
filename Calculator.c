#include <stdio.h>

int main()
{
    char o;
    int a, b, c;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &o);  // Space before %c to consume newline

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    switch(o) {
        case '+':
            c = a + b;
            printf("Result: %d\n", c);
            break;
        case '-':
            c = a - b;
            printf("Result: %d\n", c);
            break;
        case '*':
            c = a * b;
            printf("Result: %d\n", c);
            break;
        case '/':
            if (b == 0) {
                printf("Error: Division by zero\n");
            } else {
                c = a / b;
                printf("Result: %d\n", c);
            }
            break;
        default:
            printf("Error: Invalid operation\n");
    }

    return 0;
}
