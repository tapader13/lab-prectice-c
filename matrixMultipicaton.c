#include <stdio.h>
int main()
{
    int r, c, a[100][100], transpose[100][100], i, j;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // adding two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
    // printing the result
    printf("\nmul of two matrices: \n");
    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < r; ++j)
        {
            printf("%d   ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
