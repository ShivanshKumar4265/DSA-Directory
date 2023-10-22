#include<iostream>
using namespace std;

int main()
{
    int size, j;
    cout << "enter the size of array";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];
    int smallest_index = 0;

    for (j = 0; j < size; j++)
    {
        if (min > arr[j])
        {
            min = arr[j];
            smallest_index = j;
        }
    }

    cout << "index of smallest element of array is " << smallest_index;

    return 0;
}
