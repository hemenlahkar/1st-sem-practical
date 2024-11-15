#include <stdio.h>
/*Write a program that swaps two numbers using pointer*/

void swapNum(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("Before swaping:\na = %d\tb = %d\n", a, b);
    swapNum(&a, &b);
    printf("\nAfter swaping:\na = %d\tb = %d\n", a, b);
    return 0;
}