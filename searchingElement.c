#include <stdio.h>
int main()
{
    int arr[7] = {1, 3, 2, 3, 4, 3, 5};
    int k = 3;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == k)
        {
            printf("%d ", i);
        }
    }
}