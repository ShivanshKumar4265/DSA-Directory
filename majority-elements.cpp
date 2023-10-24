#include <stdio.h>

int majorityElement(int nums[], int n) {
    int count = 1;
    int candidate = nums[0];

    for (int i = 1; i < n; i++) {
        int num = nums[i];
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (num == candidate) {
            count++;
        } else if (num != candidate) {
            count--;
        }
    }
    return candidate;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int target = majorityElement(nums, n);
    printf("Majority Element is %d\n", target);

    return 0;
}