// #include <iostream>
// #include <algorithm> // For sort() and binary_search()
// using namespace std;

// int main() {
//     int arr[] = {45, 15, 79, 90, 10, 55, 12, 20, 50};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     sort(arr, arr + n); // Sorting the array in ascending order

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int target;
//     cout << "Enter element to search: ";
//     cin >> target;


//     if (binary_search(arr, arr + n, target))
//         cout << "Element found " << endl;
//     else
//         cout << "Element not found!" << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int arr[] = {45, 15, 79, 90, 10, 55, 12, 20, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<< n<< endl;
    for (int i = 0; i < n - 1; i++) { // Outer loop
        for (int j = 0; j < n - i - 1; j++) { // Inner loop
            if (arr[j] > arr[j + 1]) { // Compare adjacent elements
                swap(arr[j], arr[j + 1]); // Swap if they are in the wrong order
            }
        }
    }

    cout << "Sorted array: ";
for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
  
    return 0;
}
