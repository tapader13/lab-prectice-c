#include <stdio.h>
int main()
{
    float n, sum = 0;
    scanf("%f", &n);
    for (float i = 1; i <= n; i++)
    {
        // sum = sum + i * (i + 1);
        sum = sum + (i + .5);
    }

    printf("Sum is =%f", sum);
}