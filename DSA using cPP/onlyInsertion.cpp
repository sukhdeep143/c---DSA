#include <iostream>
using namespace std;

int main(){
    int arr[4] = {};
    cout << "Array Before Insertion:" << endl;
    for(int i = 0; i <= 3; i++){
        cout<<"arr["<< i <<"] = " << arr[i]<<endl;
    }
    
    cout << "Inserting elements.." <<endl;
    for(int j = 0; j < 4; j++){
        cin>>arr[j];
        
    }

    cout << "Array After Insertion:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

}