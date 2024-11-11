#include <stdio.h>
// Write a program to take input of two numbers and print their sum, product and difference.
int main()
{
    int M, N;
    printf("Enter the number: ");
    scanf("%d %d", &M, &N);
    printf("%d + %d = %d\n", M, N, M + N);
    printf("%d - %d = %d\n", M, N, M - N);
    printf("%d x %d = %d\n", M, N, M * N);
    return 0;
}