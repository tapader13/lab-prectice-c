#include <stdio.h>
int main()
{
    int r, c, a[100][100], i, j, sum = 0;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            // if (i == j)
            // {
            //     sum += a[i][j];//diagnal
            // }
            if (j > i)
            {
                sum += a[i][j]; // upperDiagonal
            }
        }
        printf("\n");
    }

    printf("%d", sum);

    return 0;
}
