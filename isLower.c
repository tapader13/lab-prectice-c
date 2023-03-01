#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if ((ch <= 'z' && ch >= 'a'))
    {
        printf("This is lower.");
    }
    else
    {
        printf("This is not lower.");
    }
}