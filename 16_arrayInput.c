#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", arr + i);
    }
    printf("The elements of the array are: ");
    for (int i = 0; i < 5; i++)
        printf(" %d ", arr[i]);
    printf("\n");
    return 0;
}