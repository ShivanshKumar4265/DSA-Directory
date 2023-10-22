#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

void merge(std::vector<int>& arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    std::vector<int> leftArray(n1);
    std::vector<int> rightArray(n2);

    for (int i = 0; i < n1; i++) {
        leftArray[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArray[i] = arr[middle + 1 + i];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;

    std::vector<int> arr(n);

    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> sortedArrayInsertion(arr);
    insertionSort(sortedArrayInsertion);
    std::cout << "Insertion Sort: ";
    for (int i = 0; i < n; i++) {
        std::cout << sortedArrayInsertion[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> sortedArraySelection(arr);
    selectionSort(sortedArraySelection);
    std::cout << "Selection Sort: ";
    for (int i = 0; i < n; i++) {
        std::cout << sortedArraySelection[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> sortedArrayMerge(arr);
    mergeSort(sortedArrayMerge, 0, n - 1);
    std::cout << "Merge Sort: ";
    for (int i = 0; i < n; i++) {
        std::cout << sortedArrayMerge[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> sortedArrayQuick(arr);
    quickSort(sortedArrayQuick, 0, n - 1);
    std::cout << "Quick Sort: ";
    for (int i = 0; i < n; i++) {
        std::cout << sortedArrayQuick[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}