#include <stdio.h>

int main()
{
    char o;
    int a, b;
    printf("Enter an operation: ");
    scanf("%c", &o);

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    int c;

    if(o == '+')
        c = a+b;

    else if(o == '-')
        c = a-b;

    else if(o == '*')
        c = a*b;

    else if(o == '/')
        c = a/b;

    else
        printf("Error\n");

    printf("Result: %d\n", c);
}