#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Initial array
    int index = 2; // Index to be updated
    int newValue = 100; // New value

    cout << "Before update: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    
    // Updating the element
    arr[index] = newValue; 

    cout << "\nAfter update: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    
    return 0;
}
