#include <stdio.h>
/*Write a program to use macro to swap two numbers*/
#define SWAP(x, y) \
    x = x ^ y;     \
    y = x ^ y;     \
    x = x ^ y
int main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swaping: a = %d\t b = %d\n", a, b);
    SWAP(a, b);
    printf("After swaping: a = %d\t b = %d\n", a, b);
    return 0;
}