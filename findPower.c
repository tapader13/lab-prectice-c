#include <stdio.h>
int main()
{
    int base;
    int power, ans = 1;
    scanf("%d%d", &base, &power);
    for (int i = 1; i <= power; i++)
    {
        ans = ans * base;
    }
    printf("%d", ans);
}