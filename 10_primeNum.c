#include <stdio.h>
/* Write a function to find whether a given no. is prime or not.
Use the same to generate the prime numbers less than 100*/

int checkPrime(int N)
{
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
            count++;
    }
    return (count == 2);
}

int main()
{
    printf("Prime Numbers smaller than 100 are: ");
    for (int i = 1; i < 100; i++)
        if (checkPrime(i))
            printf("%d ", i);
    return 0;
}