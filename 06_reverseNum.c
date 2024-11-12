#include <stdio.h>
int main()
{
    int N, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &N);
    while (N != 0)
    {
        rev *= 10;
        rev += N % 10;
        N /= 10;
    }
    printf("The reverse of the entered number is %d\n", rev);
    return 0;
}