#include <stdio.h>
//Write a program to display fibonacci series using (i) Recursion, (ii) Iteration

void displayFiboIteration(int n)
{
    int x = 0, y = 1, t;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x);
        t = y;
        y += x;
        x = t;
    }
}

int FiboRecursion(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    return FiboRecursion(n - 1) + FiboRecursion(n - 2);
}

int main()
{
    int n;
    printf("Enter the no. of terms: ");
    scanf("%d", &n);
    printf("\nFibonacci series using recursion: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", FiboRecursion(i));
    }
    printf("Fibonacci series using iteration: ");
    displayFiboIteration(n);

    return 0;
}