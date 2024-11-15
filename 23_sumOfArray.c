#include <stdio.h>
#include <stdlib.h>
/*Write a function to accept two arrays as arguments and returns their sum as an array*/

int *sumOfTwoArray(int *arr1, int n1, int *arr2, int n2)
{
    int i, *sum = (int *)calloc(2, sizeof(int));
    for (sum[0] = i = 0; i < n1; i++)
        sum[0] += arr1[i];
    for (sum[1] = i = 0; i < n2; i++)
        sum[1] += arr2[i];

    return sum;
}

int main()
{
    int *arr1, *arr2, *sum, n1, n2;
    printf("Enter the number of elements of the first array: ");
    scanf("%d", &n1);
    arr1 = (int *)calloc(n1, sizeof(int));
    for (int i = 0; i < n1; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", arr1 + i);
    }

    printf("Enter the number of elements of the second array: ");
    scanf("%d", &n2);
    arr2 = (int *)calloc(n2, sizeof(int));
    for (int i = 0; i < n2; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", arr2 + i);
    }

    sum = sumOfTwoArray(arr1, n1, arr2, n2);
    printf("\nThe sum of the elements of each array are %d and %d respectively\n", sum[0], sum[1]);
    return 0;
}