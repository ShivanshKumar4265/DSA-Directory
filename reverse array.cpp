#include <stdio.h>

void rvereseArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    rvereseArray(arr, 0, n - 1);
    printf("Reversed array is \n");
    printArray(arr, n);
    return 0;
}