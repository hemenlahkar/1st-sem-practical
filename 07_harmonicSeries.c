#include <stdio.h>
/* Write a program to compute the sum of the first n terms of the following series
S = 1 + 1/2 + 1/3 + 1/4 + ....*/
int main()
{
    int n;
    float sum;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("The sum of 1 + 1/2 + 1/3 + ... till %dth term is %f", n, sum);
    return 0;
}