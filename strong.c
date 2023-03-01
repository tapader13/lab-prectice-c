#include <stdio.h>
int main()
{
    int n, rem, sum = 0, temp;
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {

        rem = temp % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum += fact;
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("strong number");
    }
    else
    {
        printf("Not strong number");
    }
}