#include <stdio.h>

void printEven(int *arr, int n)
{
    printf("\nThe even valued elements are: ");
    for (int i = 0; i < n; i++)
        if (!(arr[i] % 2))
            printf(" %d ", arr[i]);
    printf("\n\n");
}

void printOdd(int *arr, int n)
{
    printf("\nThe odd valued elements are: ");
    for (int i = 0; i < n; i++)
        if (arr[i] % 2)
            printf(" %d ", arr[i]);
    printf("\n\n");
}

void printSumAvg(int *arr, int n)
{
    int sum;
    float avg;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    avg = sum / (float)n;
    printf("\nThe sum of the elements is %d\n", sum);
    printf("The average of the elements is %.2f\n", avg);
}

void printMaxMin(int *arr, int n)
{
    int max, min;
    max = min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("\nMaximum element: %d\nMinimum element: %d\n", max, min);
}

void removeDuplicate(int *arr, int *n)
{
    for (int i = 0; i < *n; i++)
    {
        for (int j = i + 1; j < *n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < *n - 1; k++)
                    arr[k] = arr[k + 1];
                (*n)--;
                j--;
            }
        }
    }
    printf("\nDuplicate elements removed successfully!\n");
}

void printReverse(int *arr, int n)
{
    printf("The elements of the array in reverse order is: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}



int main()
{
    int arr[50], n, x;
jump:
    do
    {
        printf("\nEnter the no. of elements in the array: ");
        scanf("%d", &n);
    } while (n > 50);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", arr + i);
    }

    while (1)
    {
        printf("\n1. Print the even-valued elements\n");
        printf("2. Print the odd-valued elements\n");
        printf("3. Calculate and print the sum and average of the elements of array\n");
        printf("4. Print the maximum and minimum element of array\n");
        printf("5. Remove the duplicates from the array\n");
        printf("6. Print the array in reverse order\n");
        printf("7. re-enter the elements\n");
        printf("8. quit the program\n");
        printf("\nEnter the option: ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printEven(arr, n);
            break;
        case 2:
            printOdd(arr, n);
            break;
        case 3:
            printSumAvg(arr, n);
            break;
        case 4:
            printMaxMin(arr, n);
            break;
        case 5:
            removeDuplicate(arr, &n);
            break;
        case 6:
            printReverse(arr, n);
            break;
        case 7:
            goto jump;
        case 8:
            return 0;
        default:
            printf("\nInvalid input!!\n");
            break;
        }
    }
    return 0;
}