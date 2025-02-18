#include <iostream>
using namespace std; 

int main() {
    int arr[] = {90, 40, 30};
    int array_index = 3; // Size of the array
    int element_want_to_delete = 1; // Index of the element to delete

    cout << "Original Array:" << endl;
    for (int i = 0; i < array_index; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // Shift elements to the left
    for (int i = element_want_to_delete; i < array_index - 1; i++) {
        arr[i] = arr[i + 1];
    }

    array_index--; // Reduce the size of the array

    cout << "After Deleting the element from the Array:" << endl;
    for (int i = 0; i < array_index; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    cout << endl;

    return 0;
}
