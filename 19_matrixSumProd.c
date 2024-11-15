#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int r, int c)
{
    int **A = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
        A[i] = (int *)malloc(c * sizeof(int));
    return A;
}

void freeMatrix(int **X, int r)
{
    for (int i = 0; i < r; i++)
    {
        free(X[i]);
    }
    free(X);
}

int **multiplyMatrix(int **a, int ra, int ca, int **b, int rb, int cb)
{
    if (ca != rb)
    {
        return NULL;
    }
    int **prod;
    prod = createMatrix(ra, cb);
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            prod[i][j] = 0;
            for (int k = 0; k < cb; k++)
            {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return prod;
}

int **addMatrix(int **A, int ra, int ca, int **B, int rb, int cb)
{
    if (ra != rb && ca != cb)
    {
        return NULL;
    }
    int **sum = createMatrix(ra, ca);
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    return sum;
}

void inputMatrix(int **X, int r, int c)
{
    printf("Input the elements of the matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &(X[i][j]));
        }
    }
}

void printMatrix(int **X, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf(" %d ", X[i][j]);
        printf("\n");
    }
}

int main()
{
    int **A, **B, ra, ca, rb, cb, **sum, **prod;
    printf("Enter dimension of the first matrix: ");
    scanf("%d %d", &ra, &ca);
    A = createMatrix(ra, ca);
    inputMatrix(A, ra, ca);

    printf("Enter dimension of the second matrix: ");
    scanf("%d %d", &rb, &cb);
    B = createMatrix(rb, cb);
    inputMatrix(B, rb, cb);

    prod = multiplyMatrix(A, ra, ca, B, rb, cb);
    sum = addMatrix(A, ra, ca, B, rb, cb);

    if (prod != NULL)
    {
        printf("The multiplication of the matrices are:\n");
        printMatrix(prod, ra, cb);
    }
    else
        printf("The matrices are incompatible for multiplication");
    if (sum != NULL)
    {
        printf("The addition of the matrices are:\n");
        printMatrix(sum, ra, ca);
    }
    else
        printf("The matrices aren't compatible for addition!\n");
    return 0;
}