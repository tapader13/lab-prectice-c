#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n, fibo;
    scanf("%d", &n);
    printf("%d", n1);
    printf("%d", n2);
    for (int i = 2; i < n; i++)
    {
        fibo = n1 + n2;
        n1 = n2;
        n2 = fibo;
        printf("%d", fibo);
    }

    // for (int i = 2; i < n; i++)
    // {

    // }
}