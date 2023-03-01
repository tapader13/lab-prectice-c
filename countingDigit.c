#include <stdio.h>
int main()
{
    int n, sum = 0, count = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    printf("count is =%d", count);
}