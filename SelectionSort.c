#include <stdio.h>
void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n, i;
    printf("Enter number of elements\n");
        scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    selectionSort(arr, n);

    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);

    return 0;
}