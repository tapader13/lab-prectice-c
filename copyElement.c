#include <stdio.h>
int main()
{
    int arr[7] = {1, 3, 2, 3, 4, 3, 5}, arr2[10];
    int k = 3;
    for (int i = 0; i < 7; i++)
    {
        arr2[i] = arr[i];
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d", arr2[i]);
    }
}