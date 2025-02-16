#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int item = 5;
    int n =5;

    for(int i = 0; i <n; i++ ){
        cout<<"arr["<<i<<"] = "<< arr[i]<< endl;
    }

    for(int i =0; i <n; i++){
        if(arr[i] == item){
            cout<<"Found item at " << item << " at position " << i+1 <<endl;

        }
    }
}
