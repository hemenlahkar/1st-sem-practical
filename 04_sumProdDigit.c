#include <stdio.h>
// Write a program to print the sum and product of digits of an integer
int main()
{
    int N, sum, prod;
    printf("Enter the number: ");
    scanf("%d", &N);
    const int X = N;
    for (sum = 0, prod = 1; N != 0; N /= 10)
    {
        sum += N % 10;
        prod *= N % 10;
    }
    printf("The sum of the digits of %d is %d.\n", X, sum);
    printf("The product of the digits of %d is %d.\n", X, prod);
    return 0;
}