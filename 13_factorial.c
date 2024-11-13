#include <stdio.h>
//Write a program to calculate Factorial of a number (i) using recursion, (ii) using iteration

int factIteration(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int factRecursive(int n)
{
    if (!n || n == 1)
        return 1;
    else
        return n * factRecursive(n - 1);
}

int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    printf("The factorial of %d is %d (Calculated using recursion)\n", N, factRecursive(N));
    printf("The factorial of %d is %d (Calculated using iteration)\n", N, factIteration(N));
    return 0;
}