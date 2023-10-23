#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

bool isSorted(const std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void bogoSort(std::vector<int>& arr) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    while (!isSorted(arr)) {
        std::random_shuffle(arr.begin(), arr.end());
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);

    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    bogoSort(arr);

    std::cout << "Sorted array (after Bogo Sort): ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}