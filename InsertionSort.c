#include <stdio.h>
void InsertionSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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

    InsertionSort(arr, n);

    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);

    printf("\n");

    return 0;
}