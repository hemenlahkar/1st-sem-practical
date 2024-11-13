#include <stdio.h>
// Write a program to compute factors of a given number

int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    for (int i = 2; i <= N / 2; i++)
    {
        if (!(N % i))
            printf("%d ", i);
    }

    return 0;
}