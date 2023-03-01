#include <stdio.h>
int main()
{
    int num1 = 60, num2 = 30, rem, gcd, lcd;
    int n1 = num1, n2 = num2;
    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcd = (num1 * num2) / gcd;
    printf("gcd is %d", gcd);
    printf("lcd is %d", lcd);
}