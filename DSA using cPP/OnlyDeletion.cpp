#include <iostream>
using namespace std; 

int main(){
    int arr[] = {90,40,30};
    int array_index = 3;
    int element_want_to_delete = 1;

    cout<<"Original Array"<< endl;
    for(int i = 0; i< array_index; i++){
        cout<< "arr["<<i<<"] = "<< arr[i]<<endl; 
    }
    
    for(int i = array_index; i < array_index-1; i++){
        arr[i]  = arr[i + 1];
    }
    
  array_index--;
    cout<<"After Deleting the element of Array"<< endl;
    for (int i = 0; i < array_index; i++) {
        cout<< "arr["<<i<<"] = "<< arr[i]<<endl; 
    }
    cout << endl;

    return 0;
}