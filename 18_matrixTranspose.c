#include <stdio.h>

void printTranspose(int arr[128][128], int r, int c)
{
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf(" %d ", arr[j][i]);
        }
        printf("\n");
    }
}

void inputMatrix(int arr[128][128], int *r, int *c)
{
    printf("Enter the no. of rows of the matrix: ");
    scanf("%d", r);
    printf("Enter the no. of columns of the matrix: ");
    scanf("%d", c);

    for (int i = 0; i < *r; i++)
    {
        for (int j = 0; j < *c; j++)
        {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printMatrix(int arr[128][128], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[128][128], row, column;
    inputMatrix(arr, &row, &column);
    printMatrix(arr, row, column);
    printf("Transpose of the entered matrix is:\n");
    printTranspose(arr, row, column);
    return 0;
}