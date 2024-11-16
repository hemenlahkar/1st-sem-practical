#include <stdio.h>
int main()
{
    int N;
    printf("Enter the no. of lines: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = N - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}