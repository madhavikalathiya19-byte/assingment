#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Error: Number of columns of first matrix must be equal to         rows of second matrix.\n");
    }

    int a[r1][c1], b[r2][c2], result[r1][c2];

    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            printf("Enter a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++) 
        {
            printf("Enter b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant matrix:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

