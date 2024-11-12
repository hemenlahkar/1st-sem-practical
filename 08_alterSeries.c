#include <stdio.h>
/* Write a program to compute the sum of the first n terms of the following series
S = 1 - 2 + 3 - 4 + 5 .....*/
int main()
{
    int n, sum = 0;
    printf("Enter the no. of terms: ");
    scanf("%d", &n);
    for (int i = 1, x = 1; i <= n; i++)
    {
        sum += i * x;
        x *= -1;
    }
    printf("The sum of 1-2+3-4 .... till %dth term is %d\n", n, sum);
    return 0;
}