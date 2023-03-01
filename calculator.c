#include <stdio.h>
int main()
{
    int a, b;
    char operation;
    printf("Enter any operation =");
    scanf("%c", &operation);
    printf("Enter any two number =");
    scanf("%d%d", &a, &b);

    switch (operation)
    {
    case '+':
    {
        printf("%d+%d=%d", a, b, a + b);
        break;
    }
    case '-':
    {
        printf("%d-%d=%d", a, b, a - b);
        break;
    }
    case '*':
    {
        printf("%d*%d=%d", a, b, a * b);
        break;
    }
    case '/':
    {
        printf("%d/%d=%d", a, b, a / b);
        break;
    }
    default:
    {
        printf("Not a valid operation.");
    }
    }
}