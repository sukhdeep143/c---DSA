#include <iostream>
using namespace std;

int main(){
    int arrays_set[4] = {20, 10, 15, 56};
    int loc, item;

    cout<<"Enter the location where you want to delete the data '0'1'2'3' : "<<endl;
    cin>>loc;

    item = arrays_set[loc];

    for(int i = loc; i<=3; i++){
        arrays_set[i] = arrays_set[i+1];
    }

    // cout<<arrays_set[0]<<endl;
    for(int i = 0; i <= 3; i++){
        cout<<arrays_set[i]<<endl;

    }


}