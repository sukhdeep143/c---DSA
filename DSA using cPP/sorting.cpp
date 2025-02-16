#include <iostream>
#include <algorithm> // For sort()
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // Sorting the array in ascending order

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
