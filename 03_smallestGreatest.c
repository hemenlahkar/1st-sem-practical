#include<stdio.h>
int main()
{
    int X, Y, Z, smallest, largest;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &X, &Y, &Z);
    largest = X>Y&&X>Z?X:(Y>Z?Y:Z);
    smallest = X<Y&&X<Z?X:(Y<Z?Y:Z);
    printf("%d is the smallest and %d is the greatest among the three numbers.\n", smallest, largest);
    return 0;
}