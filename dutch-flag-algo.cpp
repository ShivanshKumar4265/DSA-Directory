#Dutch Flag Algo: To separate three different entities,  e.g :- Sort 0s,1s and 2s in an array without using sorting algo

#include <iostream>
using namespace std;

void dutch_flag(int arr[], int size) {
    int low = 0, mid = 0, high = size - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else if (arr[mid] == 2) {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

void printArray(int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int a[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);
    dutch_flag(a, n);
    printArray(a, n);
    return 0;
}