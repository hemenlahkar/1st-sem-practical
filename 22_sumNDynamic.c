#include <stdio.h>
#include <stdlib.h>
/*Write a program to find sum of n elements entered by the user.
To write this program, allocate memory dynamically using malloc()/calloc() functions or new operator*/

int main()
{
    int *ptr, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Element[%d]: ", i);
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < n; i++)
        sum += ptr[i];
    free(ptr);
    printf("\nThe sum of the entered numbers is: %d\n", sum);
    free(sum);
    return 0;
}