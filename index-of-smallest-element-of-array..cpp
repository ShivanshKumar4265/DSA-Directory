#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    sort(arr, arr + n);
    cout << arr[0] << " --> smallest number " << endl;
    cout << arr[n - 1] << " --> largest number " << endl;

    return 0;
}
