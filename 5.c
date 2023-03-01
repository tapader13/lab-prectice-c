#include <stdio.h>

int main()
{
    int year[4] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        if (year[0] < year[i])
        {
            year[0] = year[i];
        }
    }
    printf("%d", year[0]);
}