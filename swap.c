#include <stdio.h>

int main()
{
    int n1 = 5, n2 = 7;
    n1 = n1 + n2; // n1=12
    n2 = n1 - n2; // n2=5
    n1 = n1 - n2; // n1=7
    printf("n1 %d\n n2 %d", n1, n2);
}